// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//
// Stack
//
#include "Stack.h"

template <typename T>
Stack <T>::Stack (void)
{
	//leave this empty
}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
	//takes stack as input to Array class
	: stack_array(stack.stack_array)
{

}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
	//leave this empty
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
	//adds extra space to array and adds element T to top index
	//Array<T>::resize(size() + 1);
	//Array_Base<T>::set(size() -1, element);
	stack_array.resize(size() + 1);
	stack_array.set(size() -1, element);
}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
	if (!is_empty())
	{
		//decrements cur_size_ of stack
		stack_array.resize(size() - 1);
	}
	else
	{
		throw empty_exception();
	}
}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
	if (this != &rhs)
	{
		this->stack_array = rhs.stack_array;
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
void Stack <T>::clear (void)
{
	//resets stack back to original constructor size
	stack_array.resize(DEFAULT_SIZE);
}