//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Binary_Node.h"

Binary_Node::Binary_Node (void)
	: left_ (nullptr)
	, right_ (nullptr)
{
	
}

Binary_Node::Binary_Node (Node * left, Node * right)
	: left_ (left)
	, right_ (right)
{
	
}

//should run through each tree node and delete
Binary_Node::~Binary_Node (void)
{
	delete left_;
	delete right_;
}

Node * Binary_Node::get_left_node (void) const
{
	return left_;
}

Node * Binary_Node::get_right_node (void) const
{
	return right_;
}

void Binary_Node::set_left_node (Node * left)
{
	left_ = left;
}

void Binary_Node::set_right_node (Node * right)
{
	right_ = right;
}