//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Calculator_H_
#define _Calculator_H_

#include "Array.h"
#include "Stack.h"
#include "Stack_Expr_Command_Factory.h"

#include <iostream>
#include <sstream>


/**
*@class Calculator
* Calculator class to handle the evaluation and cleanup of an expression entered
*
*
*/

class Calculator
{
public:
	Calculator (void);
	int evaluate(std::string infix);
	void infix_to_postfix(const std::string & infix, Stack_Expr_Command_Factory & factory, Array<Expr_Command *> & postfix);
	~Calculator (void);
	
private:
};
#endif