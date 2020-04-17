//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Tree_Builder.h"

Tree_Builder::Tree_Builder (void)
{
	
}

Tree_Builder::~Tree_Builder (void)
{
	
}

void Tree_Builder::start_expression (void)
{
	this->tree_ = nullptr;
}

//pushes new number node to output to be connected to operators
void Tree_Builder::build_number (int n)
{
	output_.push(new Number_Node(n));
}

//pushes all operators to binary stack
void Tree_Builder::build_add_operator (void)
{
	bin_stack_.push(new Add_Node());
}

void Tree_Builder::build_sub_operator (void)
{
	bin_stack_.push(new Sub_Node());
}

void Tree_Builder::build_mult_operator (void)
{
	bin_stack_.push(new Mult_Node());
}

void Tree_Builder::build_div_operator (void)
{
	bin_stack_.push(new Div_Node ());
}

void Tree_Builder::build_mod_operator (void)
{
	bin_stack_.push(new Mod_Node ());
}


void Tree_Builder::build_open_parent (void)
{
	
}

void Tree_Builder::build_close_parent (void)
{
	
}

//assigns the node from start_expression and assigns to top of the tree of nodes
void Tree_Builder::connect_expression (void)
{
	Binary_Node * expr;
	//empties the binary_op stack and connects each node to operator
	while (!bin_stack_.is_empty())
	{
		expr = bin_stack_.top();
		expr->set_right_node (output_.top());
		output_.pop();
		expr->set_left_node (output_.top());
		output_.pop();
		
		output_.push(expr);
		bin_stack_.pop();
	}
	
	tree_ = output_.top();
	output_.pop();
}

Node * Tree_Builder::get_expression (void)
{
	return this->tree_;
}