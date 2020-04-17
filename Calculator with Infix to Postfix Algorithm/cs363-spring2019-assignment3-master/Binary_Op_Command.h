//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Binary_Op_Command_H_
#define _Binary_Op_Command_H_

#include "Stack.h"
#include "Expr_Command.h"

/**
 * @class Binary_Op_Command
 *
 *
 */
class Binary_Op_Command : public Expr_Command
{
protected:
	Binary_Op_Command (Stack <int> & s);
	
public:
	
	//execute definition from Expr_Command
	void execute (void);
	
	virtual int evaluate (int n1, int n2) const = 0;
	
	~Binary_Op_Command (void);
	
private:
	Stack <int> & s_;
};
#endif