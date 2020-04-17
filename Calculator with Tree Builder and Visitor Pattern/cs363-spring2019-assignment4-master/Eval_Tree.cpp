//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Eval_Tree.h"

Eval_Tree::Eval_Tree (void)
{
	
}

Eval_Tree::~Eval_Tree (void)
{
	
}

//moved get_left_node and get_right_node methods to own method since getting each node and popping off stack uses the same lines of code
void Eval_Tree::Op_Node_Visit (const Binary_Node & node)
{
	node.get_left_node()->accept (*this);
	node.get_right_node()->accept (*this);
	
	right_node_ = num_stack_.top ();
	num_stack_.pop ();
	left_node_ = num_stack_.top ();
	num_stack_.pop ();
}

//visits both sides of add node and continues to go through accepts till visitor gets to number node
//makes it so each visit just needs to add unique operation then push result_
void Eval_Tree::Visit_Add_Node (const Add_Node & node)
{
	Op_Node_Visit (node);
	
	result_ = left_node_ + right_node_;
	num_stack_.push(result_);
}

void Eval_Tree::Visit_Sub_Node (const Sub_Node & node)
{
	
	Op_Node_Visit (node);
	
	result_ = left_node_ - right_node_;
	num_stack_.push (result_);
}

//gets value from number node, dont have to accept another node since its always going to be on the bottom of tree
void Eval_Tree::Visit_Number_Node (const Number_Node & node)
{
	result_ = node.get_num_val();
	num_stack_.push (result_);
	
}

void Eval_Tree::Visit_Mult_Node (const Mult_Node & node)
{
	Op_Node_Visit (node);
	
	result_ = left_node_ * right_node_;
	num_stack_.push (result_);
}

void Eval_Tree::Visit_Mod_Node (const Mod_Node & node)
{
	Op_Node_Visit (node);
	
	result_ = left_node_ % right_node_;
	num_stack_.push (result_);
}
void Eval_Tree::Visit_Div_Node (const Div_Node & node)
{
	Op_Node_Visit (node);
	
	result_ = left_node_ / right_node_;
	num_stack_.push (result_);
}

int Eval_Tree::result (void) const
{
	return this->result_;
}