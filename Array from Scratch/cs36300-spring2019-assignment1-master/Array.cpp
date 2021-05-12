// $Id: Array.cpp 820 2011-01-17 15:30:41Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
#include <stdexcept>
#include <random>
#include <time.h>

Array::Array (void)
// COMMENT Initialize all member variables in the base member initialization section
// of the constructor on its own line. Otherwise, it is hard to know what initialization
// has an error since it will not have its own unique line number.
// FIX changed variables to initialization section
	: cur_size_(0)
	, max_size_(0)
	, data_(nullptr)
{
  // COMMENT The current size of the array for the default constuctor is 0.
  // FIX changed cur_size_ to 0
}

Array::Array (size_t length)
// COMMENT Initialize all member variables in the base member initialization section
// of the constructor on its own line. Otherwise, it is hard to know what initialization
// has an error since it will not have its own unique line number.
// FIX changed variables to initialization section
	: cur_size_(length)
	, max_size_(length)
	, data_(nullptr)
{
	data_ = new char[cur_size_];
}

Array::Array (size_t length, char fill)
// COMMENT Initialize all member variables in the base member initialization section
// of the constructor on its own line. Otherwise, it is hard to know what initialization
// has an error since it will not have its own unique line number.
// FIX changed variables to initialization section
	: cur_size_(length)
	, max_size_(length)
	, data_(nullptr)
{
	data_ = new char[cur_size_];
	
	for (int i=0; i < length; i++)
	{
		data_[i] = fill;
	}
}

//have to allocate new block of memory so delete pointer isn't crashing when called
//should be deep copy
Array::Array (const Array & array)
// COMMENT Initialize all member variables in the base member initialization section
// of the constructor on its own line. Otherwise, it is hard to know what initialization
// has an error since it will not have its own unique line number.
// FIX changed variables to initialization section
	: cur_size_(array.size())
	, max_size_(array.max_size())
	, data_(nullptr)
{
	
	data_ = new char[cur_size_];
	
	for (int i=0; i < cur_size_; i++)
	{
    // COMMENT Use the index operator when accessing data (i.e., data_[i])
	// FIX changed pointer to index operator

		data_[i] = array.data_[i];
	}
}

//delete data_ using [] since it was called as new char[]
Array::~Array (void)
{
	delete [] data_;
  
  // COMMENT There is no need to reset the data_ variable since this object is no
  // longer useable after the desturctor returns.
  // FIX removed the nullptr data_ variable
}

const Array & Array::operator = (const Array & rhs)
{
  // COMMENT Check for self assignment first.
  // FIX Changed to look for self assignment
	if (&rhs != this)
	{
		
  // COMMENT You should only change the allocation size of this array is not
  // large enought to hold rhs.
  // FIX changed the allocation and used delete [] to get rid of old array
		delete [] data_;
		
		cur_size_ = rhs.cur_size_;
		max_size_ = rhs.max_size_;
		data_ = new char[cur_size_];
		
		for (int i=0; i < cur_size_; i++)
		{
  // COMMENT Use the index operator when accessing data (i.e., data_[i])
  // FIX changed pointer to index operator
			data_[i] = rhs.data_[i];
		}
	}
	else
	{
		return *this;
	}
}

char & Array::operator [] (size_t index)
{
	//Fixed if statement to only check if greater than or equal since size_t cant be negative
	if (index >= cur_size_)
	{
    // COMMENT You are to throw out of range exception if the index is invalid.
	// FIX throws std::out_of_range exception

		throw std::out_of_range("Invalid index value");
	}
	else
	{
		return this->data_[index];
	}
}

const char & Array::operator [] (size_t index) const
{
	//Fixed if statement to only check if greater than or equal since size_t cant be negative
	if (index >= cur_size_)
	{
    // COMMENT You are to throw out of range exception if the index is invalid.
	// FIX throws std::out_of_range exception

		throw std::out_of_range("Invalid index value");
	}
	else
	{
		return this->data_[index];
	}
}

char Array::get (size_t index) const
{
	//Fixed if statement to only check if greater than or equal since size_t cant be negative
	if (index >= cur_size_)
	{
    // COMMENT You are to throw out of range exception if the index is invalid.
	// FIX throws std::out_of_range exception

		throw std::out_of_range("Invalid index value");
	}
	else
	{
    // COMMENT Use the index operator when accessing data (i.e., data_[i])
	// FIX changed pointer to index operator

		return data_[index];
	}
}

void Array::set (size_t index, char value)
{
	//Fixed if statement to only check if greater than or equal since size_t cant be negative
	if (index >= cur_size_)
	{
    // COMMENT You are to throw out of range exception if the index is invalid.
	// FIX throws std::out_of_range exception

		throw std::out_of_range("Invlalid index value");
	}
	else
	{
    // COMMENT Use the index operator when accessing data (i.e., data_[i])
	// FIX changed the pointer to index operator

		data_[index] = value;
	}
}

//keeps values if smaller and adds blank spots to be filled/set later
void Array::resize (size_t new_size)
{
  // COMMENT The resize method should only increase the size of the allocation if
  // the new size is larger than the current memory allocation for the array. If resized,
  // you need to preserve the old data. Otherwise, you can just update cur_size_ to
  // reflect the new size.
  // FIX changed method to correctly allocate memory only when new_size is bigger than cur_size_ and max_size_
  // also used temp variable to store contents of old array when making bigger
	if (new_size > max_size_)
	{
		char * temp = new char[new_size];
		
		for (int i=0; i < cur_size_; i++)
		{
	// COMMENT Use the index operator when accessing data (i.e., data_[i])
	// FIX changed pointer to index operator
			temp[i] = data_[i];
		}
		
		delete [] data_;
		data_ = temp;
		
		cur_size_ = new_size;
		max_size_ = new_size;
	}
	else
	{
		cur_size_ = new_size;
	}
	// COMMENT Use the index operator when accessing data (i.e., data_[i])
	// FIX deleted the other index operator
}

int Array::find (char ch) const
{
	for (int i=0; i < cur_size_; i++)
	{
    // COMMENT Use the index operator when accessing data (i.e., data_[i])
	// FIX changed pointer to index operator

		if (data_[i] == ch)
		{
			return i;
		}
	}
	
	return -1;
}

int Array::find (char ch, size_t start) const
{
	//Fixed if statement to only check if greater than or equal since size_t cant be negative
	if (start > cur_size_)
	{
    // COMMENT You are to throw an exception if the index is invalid.
	// FIX throws std::out_of_range exception

		throw std::out_of_range("Invalid index");
	}
	else
	{
		for (int i = start; i < cur_size_; i++)
		{
      // COMMENT Use the index operator when accessing data (i.e., data_[i])
	  // FIX changed pointer to index operator

			if (data_[i] == ch)
			{
				return i;
			}
		}
		
		return -1;
	}
}

bool Array::operator == (const Array & rhs) const
{
  // COMMENT Check for self comparison first
  // FIX changed to look for same array
	if (&rhs == this)
	{
		return true;
	}
	//checks for size of each array just in case they are different
	if (cur_size_ == rhs.size())
	{
		for (int i=0; i < cur_size_; i++)
		{
      // COMMENT Use the index operator when accessing data (i.e., data_[i])
	  // FIX changed pointer to index operator
			if(data_[i] != rhs.data_[i])
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

bool Array::operator != (const Array & rhs) const
{
  // COMMENT You can define operator != in terms of operator ==.
  // FIX changed != operator to just be !(==) so code is only dependent on == operator
	return !(*this == rhs);
	
  // COMMENT Use the index operator when accessing data (i.e., data_[i])
  // FIX deleted the code so no need to use index operator
}

void Array::fill (char ch)
{
	for (int i=0; i < cur_size_; i++)
	{
    // COMMENT Use the index operator when accessing data (i.e., data_[i])
	// FIX changed pointer to index operator

		data_[i] = ch;
	}
}

void Array::shrink (void)
{
  // COMMENT Purpose of the shrink method is to recover an unused
  // memory allocation. For example, if the array has allocated 10, and
  // the current size is 5, then 5 spaces us wasted. The shrink method
  // we reclaim the 5 unused spaces so the array only has an allocation
  // large enough to fits is current size (i.e., 5 in this example).
  // FIX the shrink method takes the old array and puts the new values up to cur_size_
  // then deletes the old array and reassigns.
  
	char * temp = new char[cur_size_];
	
	for (int i=0; i < cur_size_; i++)
	{
		temp[i] = data_[i];
	}
	
	delete [] data_;
	
	data_ = temp;
	max_size_ = cur_size_;
	
}

void Array::reverse (void)
{
	//created variables so not using size() method each time
	size_t index = 0;
	size_t end = (size() - 1);
	size_t mid = (size() / 2);
	
	//starts from the ends and swaps going inward each iteration
	while (index < mid)
	{
    // COMMENT Use the index operator when accessing data (i.e., data_[i])
	// FIX changed pointer to index operator
		char temp = data_[index];

    // COMMENT Use the index operator when accessing data (i.e., data_[i])
    // FIX changed pointer to index operator
		data_[index] = data_[end];
    
    // COMMENT Use the index operator when accessing data (i.e., data_[i])
	// FIX changed pointer to index operator
		data_[end] = temp;
		
		index++;
		end--;
		
	}
}

int Array::sort(void)
{
	srand(time(NULL));
	bool sort = false;
	char temp;
	int i1;
	int i2;
	long iterations;
	while(!sort)
	{
		sort = true;
		i1 = rand()%cur_size_;
		i2 = rand()%cur_size_;
		temp = data_[i1];
		data_[i1] = data_[i2];
		data_[i2] = temp;
		for(i1 = 0;i1<cur_size_ - 1;i1++)
		{
			if(data_[i1] > data_[i1+1])
			{
				sort = false;
				break;
			}
		}
		iterations++;
	}
	return iterations;	
}

Array Array::slice (size_t begin) const
{
	size_t index = begin;
	size_t end = cur_size_;
	Array newArray = *(this->data_);
	for (index; index < end; index++)
	{
		newArray[index] = *(this->data_);
	}
	
	return newArray;
}

Array Array::slice (size_t begin, size_t end) const
{
	Array newArray = *(this->data_);
	for (begin; begin < end; begin++)
	{
		newArray[begin] = *(this->data_);
	}
	
	return newArray;
}
