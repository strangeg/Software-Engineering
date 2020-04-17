//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Sub_Node.h"

Sub_Node::Sub_Node (void)
	: Binary_Node ()
{
	
}

Sub_Node::Sub_Node (Node * left, Node * right)
	: Binary_Node (left, right)
{
	
}

Sub_Node::~Sub_Node (void)
{
	
}

void Sub_Node::accept (Node_Visitor & v)
{
	v.Visit_Sub_Node (*this);
}