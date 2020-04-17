//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Add_Node.h"

Add_Node::Add_Node (void)
	: Binary_Node ()
{
	
}

Add_Node::Add_Node (Node * left, Node * right)
	: Binary_Node (left, right)
{
	
}

Add_Node::~Add_Node (void)
{
	
}

void Add_Node::accept (Node_Visitor & v)
{
	v.Visit_Add_Node (*this);
}