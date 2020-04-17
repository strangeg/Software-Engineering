// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//
// Queue
//
#include "Queue.h"

template <typename T>
Queue <T>::Queue (void)
{
	//leave this empty
}

//
// Queue
//
template <typename T>
Queue <T>::Queue (const Queue & queue)
	: queue_array(queue.queue_array)
{

}

//
// ~Queue
//
template <typename T>
Queue <T>::~Queue (void)
{
	//leave this empty to call array destructor
}

//
// enqueue
//
template <typename T>
void Queue <T>::enqueue(T element)
{
  // COMMENT You are resizing the queue, but you are wasting space at the front of
  // the array. Fix your design so you use all the space in the array.
  // FIX implemented a better enqueue method below that solves the problem
  
	//same method as stack
	queue_array.resize(size() + 1);
	queue_array.set(size() -1, element);
}

//
// dequeue
//
template <typename T>
void Queue <T>::dequeue (void)
{
  // COMMENT This solution will work, but you are wasting space at the front
  // of the array since those "unused" spaces will never be used again. Please
  // come up with a better design that uses memory more efficiently.
  // FIX implemented a better solution that doesn't just hide the values
  
	if (size() == 0)
	{
		throw empty_exception();
	}
	else
	{	
		//moves the front of the array to take values off
		T temp;
		
		
		for (int i = 0; i < size() -1; i++)
		{
			temp = queue_array.get(i + 1);
			queue_array.set(i, temp);
		}
		queue_array.resize(size() -1);
	}
}

//
// operator =
//
template <typename T>
const Queue <T> & Queue <T>::operator = (const Queue & rhs)
{
	if (this != &rhs)
	{
		this->queue_array = rhs.queue_array;
	}
	else
	{
		return *this;
	}
}

//
// clear
//
template <typename T>
void Queue <T>::clear (void)
{
	//resets Queue back to original constructor size
	queue_array.resize(DEFAULT_SIZE);
}