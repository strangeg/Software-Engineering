// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
#include <stdexcept>         // for std::out_of_bounds exception

//default size for arrays
#define DEFAULT_SIZE 0

//
// Array
//
template <typename T>
Array <T>::Array (void)
	: Array_Base<T> ()
{
	
}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array (size_t length)
	: Array_Base<T> (length)
{
	
}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array (size_t length, T fill)
	: Array_Base<T> (length, fill)
{
	
}

//
// Array (const Array &)
//
template <typename T>
Array <T>::Array (const Array & array)
	: Array_Base<T> (array)
{
	
}

//
// ~Array
//
template <typename T>
Array <T>::~Array (void)
{
	//leave blank to call parent constructor
}

//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{
	if (new_size > this->max_size_)
	{
		T * temp = new T[new_size];
		
		for (int i=0; i < this->cur_size_; i++)
		{
			temp[i] = this->data_[i];
		}
		
		delete [] this->data_;
		this->data_ = temp;
		
		this->cur_size_ = new_size;
		this->max_size_ = new_size;
	}
	else
	{
		this->cur_size_ = new_size;
	}
}

//
// shrink
//
template <typename T>
void Array <T>::shrink (void)
{
	T * temp = new T[this->cur_size_];
	
	for (int i=0; i < this->cur_size_; i++)
	{
		temp[i] = this->data_[i];
	}
	
	delete [] this->data_;
	
	this->data_ = temp;
	this->max_size_ = this->cur_size_;
}

//
// reverse
//
template <typename T>
void Array <T>::reverse (void)
{
	size_t index = 0;
	size_t end = (size() - 1);
	size_t mid = (size() / 2);
	
	while (index < mid)
	{
		T temp = this->data_[index];
		this->data_[index] = this->data_[end];
		this->data_[end] = temp;
		
		index++;
		end--;
	}
}

//
// slice
//
template <typename T>
Array<T> Array <T>::slice (size_t begin) const
{
	size_t index = begin;
	size_t end = this->cur_size_;
	Array newArray = *(this->data_);
	for (index; index < end; index++)
	{
		newArray[index] = *(this->data_);
	}
	
	return newArray;
}

//
// slice
//
template <typename T>
Array<T> Array <T>::slice (size_t begin, size_t end) const
{
	Array newArray = *(this->data_);
	for (begin; begin < end; begin++)
	{
		newArray[begin] = *(this->data_);
	}
	
	return newArray;
}

