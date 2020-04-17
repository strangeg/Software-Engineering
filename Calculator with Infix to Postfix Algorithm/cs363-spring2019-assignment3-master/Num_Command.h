//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Num_Command_H_
#define _Num_Command_H_

#include "Expr_Command.h"
#include "Stack.h"

/**
 * @class Num_Command
 *
 *
 */
class Num_Command : public Expr_Command
{
public:
	//default constructor
	Num_Command (void);
	
	//initializing constructor
	Num_Command (Stack <int> & s, int n);
	
	//execute definition from Expr_Command
	void execute (void);
	
	//destructor
	~Num_Command (void);
	
private:
	Stack <int> & s_;
	int n_;
};
#endif