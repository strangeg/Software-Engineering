//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Unary_Op_Command_H_
#define _Unary_Op_Command_H_

#include "Stack.h"

/**
 * @class Unary_Op_Command
 *
 *
 */
class Unary_Op_Command : public Expr_Command
{
public:
	//default constructor
	Unary_Op_Command (void);
	
	//execute definition from Expr_Command
	void execute (void);
	
	virtual int evaluate (int n1) const = 0;
	
	//destructor
	~Unary_Op_Command (void);
	
protected:
	Unary_Op_Command (Stack <int> & s);
	
private:
	Stack <int> & s_;
};
#endif