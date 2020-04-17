//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Stack_Expr_Command_Factory.h"

Stack_Expr_Command_Factory::Stack_Expr_Command_Factory (Stack <int> & stack)
	: stack_ (stack)
{
	
}

//each command returns a concrete type depending on which method is called.
//these are all similar methods of a Expr_Command so they can all just be put in the same file
Num_Command * Stack_Expr_Command_Factory::create_number_command (int num)
{
	return new Num_Command(stack_,num);
}

Add_Command * Stack_Expr_Command_Factory::create_add_command (void)
{
	return new Add_Command(stack_);
}

Sub_Command * Stack_Expr_Command_Factory::create_subtract_command (void)
{
	return new Sub_Command(stack_);
}

Div_Command * Stack_Expr_Command_Factory::create_divide_command (void)
{
	return new Div_Command(stack_);
}

Mult_Command * Stack_Expr_Command_Factory::create_multiply_command (void)
{
	return new Mult_Command(stack_);
}

Mod_Command * Stack_Expr_Command_Factory::create_modulus_command (void)
{
	return new Mod_Command(stack_);
}

Parenthesis_Command * Stack_Expr_Command_Factory::create_parenthesis_command (void)
{
	return new Parenthesis_Command();
}

Stack_Expr_Command_Factory::~Stack_Expr_Command_Factory ()
{
	//leave empty
}
