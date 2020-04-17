// -*- C++ -*-

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// size
//
template <typename T>
inline
size_t Array <T>::size (void) const
{
	return Array_Base<T>::size();
}

//
// max_size
//
template <typename T>
inline
size_t Array <T>::max_size (void) const
{
	return Array_Base<T>::max_size();
}