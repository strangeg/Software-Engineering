//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Expr_Command_Factory_H_
#define _Expr_Command_Factory_H_

#include "Num_Command.h"
#include "Add_Command.h"
#include "Sub_Command.h"
#include "Div_Command.h"
#include "Mult_Command.h"
#include "Mod_Command.h"
#include "Parenthesis_Command.h"

/**
* @class Expr_Command_Factory
* This is the abstract factory that each command will be directed from
* The private methods allow protection from the derived factories/classes
*/

class Expr_Command_Factory
{
	public:
		Expr_Command_Factory (void);
		virtual ~Expr_Command_Factory (void) = 0;
		virtual Num_Command * create_number_command (int num) = 0;
		virtual Add_Command * create_add_command (void) = 0;
		virtual Sub_Command * create_subtract_command (void) = 0;
		virtual Div_Command * create_divide_command (void) = 0;
		virtual Mult_Command * create_multiply_command (void) = 0;
		virtual Mod_Command * create_modulus_command (void) = 0;
		virtual Parenthesis_Command * create_parenthesis_command (void) = 0;
	
	private:
		Expr_Command_Factory (const Expr_Command_Factory &);
		const Expr_Command_Factory & operator = (const Expr_Command_Factory &);
};
#endif