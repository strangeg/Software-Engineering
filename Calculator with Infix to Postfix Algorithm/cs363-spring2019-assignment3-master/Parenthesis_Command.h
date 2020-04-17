//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Parenthesis_Command_H_
#define _Parenthesis_Command_H_

#include "Expr_Command.h"

/**
 * @class Parenthesis_Command
 *
 *
 */
class Parenthesis_Command : public Expr_Command
{
public:
	//default constructor
	Parenthesis_Command (void);
	
	//execute definition from Expr_Command
	void execute (void);
	
	//destructor
	~Parenthesis_Command (void);
	
private:

};
#endif