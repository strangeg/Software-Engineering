// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array_Base.h"
#include <stdexcept>         // for std::out_of_bounds exception

//default size for arrays
#define DEFAULT_SIZE 0

//
// Array_Base
//
template <typename T>
Array_Base <T>::Array_Base (void)
	: cur_size_(DEFAULT_SIZE)
	, max_size_(DEFAULT_SIZE)
	, data_(nullptr)
{

}

//
// Array_Base (size_t)
//
template <typename T>
Array_Base <T>::Array_Base (size_t length)
	: cur_size_(length)
	, max_size_(length)
	, data_(nullptr)
{
	data_ = new T[cur_size_];
}

//
// Array_Base (size_t, char)
//
template <typename T>
Array_Base <T>::Array_Base (size_t length, T fill)
	: cur_size_(length)
	, max_size_(length)
	, data_(nullptr)
{
	data_ = new T[cur_size_];
	
	for (int i=0; i < length; i++)
	{
		data_[i] = fill;
	}
}

//
// Array_Base (const Array_Base &)
//
template <typename T>
Array_Base <T>::Array_Base (const Array_Base & array)
	: cur_size_(array.size())
	, max_size_(array.max_size())
	, data_(nullptr)
{
	data_ = new T[cur_size_];
	
	for (int i=0; i < cur_size_; i++)
	{
		data_[i] = array.data_[i];
	}
}

//
// ~Array_Base
//
template <typename T>
Array_Base <T>::~Array_Base (void)
{
	delete [] data_;
}

//
// operator =
//
template <typename T>
const Array_Base <T> & Array_Base <T>::operator = (const Array_Base & rhs)
{
	if (&rhs != this)
	{
		delete [] data_;
		
		cur_size_ = rhs.cur_size_;
		max_size_ = rhs.max_size_;
		data_ = new T[cur_size_];
		
		for (int i=0; i < cur_size_; i++)
		{
			data_[i] = rhs.data_[i];
		}
	}
	else
	{
		return *this;
	}
}

//
// operator []
//
template <typename T>
T & Array_Base <T>::operator [] (size_t index)
{
	if (index >= cur_size_)
	{
		throw std::out_of_range("Invalid index value");
	}
	else
	{
		return this->data_[index];
	}
}

//
// operator [] 
//
template <typename T>
const T & Array_Base <T>::operator [] (size_t index) const
{
	if (index >= cur_size_)
	{
		throw std::out_of_range("Invalid index value");
	}
	else
	{
		return this->data_[index];
	}
}

//
// get
//
template <typename T>
T Array_Base <T>::get (size_t index) const
{
	if (index >= cur_size_)
	{
		throw std::out_of_range("Invalid index value");
	}
	else
	{
		return data_[index];
	}
}

//
// set
//
template <typename T>
void Array_Base <T>::set (size_t index, T value)
{
	if (index >= cur_size_)
	{
		throw std::out_of_range("Invalid index value");
	}
	else
	{
		data_[index] = value;
	}
}

//
// find (char)
//
template  <typename T>
int Array_Base <T>::find (T value) const
{
	for (int i=0; i < cur_size_; i++)
	{
		if (data_[i] == value)
		{
			return i;
		}
	}
	
	return -1;
}

//
// find (char, size_t) 
//
template <typename T>
int Array_Base <T>::find (T val, size_t start) const
{
	if (start > cur_size_)
	{
		throw std::out_of_range("Invalid index");
	}
	else
	{
		for (int i = start; i < cur_size_; i++)
		{
			if (data_[i] == val)
			{
				return i;
			}
		}
		
		return -1;
	}
}

//
// operator ==
//
template <typename T>
bool Array_Base <T>::operator == (const Array_Base & rhs) const
{
	if (&rhs == this)
	{
		return true;
	}
	if (cur_size_ == rhs.size())
	{
		for (int i=0; i < cur_size_; i++)
		{
			if (data_[i] != rhs.data_[i])
			{
				return false;
			}
		}
		
		return true;
	}
	else
	{
		return false;
	}
}

//
// operator !=
//
template <typename T>
bool Array_Base <T>::operator != (const Array_Base & rhs) const
{
	return !(*this == rhs);
}

//
// fill
//
template <typename T>
void Array_Base <T>::fill (T value)
{
	for (int i=0; i < cur_size_; i++)
	{
		data_[i] = value;
	}
	
}

//
// reverse
//
template <typename T>
void Array_Base <T>::reverse (void)
{
	size_t index = 0;
	size_t end = (size() - 1);
	size_t mid = (size() / 2);
	
	while (index < mid)
	{
		T temp = data_[index];
		data_[index] = data_[end];
		data_[end] = temp;
		
		index++;
		end++;
	}
}
