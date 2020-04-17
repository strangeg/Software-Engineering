//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Number_Node.h"

Number_Node::Number_Node (void)
{
	
}

Number_Node::Number_Node (int num)
	: n_ (num)
{
	
}

Number_Node::~Number_Node (void)
{
	
}

void Number_Node::accept (Node_Visitor & v)
{
	v.Visit_Number_Node (*this);
}

int Number_Node::get_num_val (void) const
{
	return n_;
}