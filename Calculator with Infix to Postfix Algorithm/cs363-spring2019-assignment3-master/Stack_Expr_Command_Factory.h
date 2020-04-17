//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Stack_Expr_Command_Factory_H_
#define _Stack_Expr_Command_Factory_H_

#include "Expr_Command_Factory.h"

/**
*@class Stack_Expr_Command_Factory
*This is the concrete to the abstract Expr_Command_Factory
*
*
*/

class Stack_Expr_Command_Factory : public Expr_Command_Factory
{
public:
	Stack_Expr_Command_Factory (Stack <int> & stack);
	Num_Command * create_number_command (int num);
	Add_Command * create_add_command (void);
	Sub_Command * create_subtract_command (void);
	Div_Command * create_divide_command (void);
	Mult_Command * create_multiply_command (void);
	Mod_Command * create_modulus_command (void);
	Parenthesis_Command * create_parenthesis_command (void);
	~Stack_Expr_Command_Factory (void);
	
private:
	Stack <int> & stack_;
};
#endif