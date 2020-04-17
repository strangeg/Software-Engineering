//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Expr_Command_H_
#define _Expr_Command_H_

class Expr_Command 
{
public:
	virtual void execute (void) = 0;
	virtual ~Expr_Command (void) = 0;
	//think this would be const? not too sure but it seems right
	int precedence (void) const;
	
protected:
	//prec_value will be assigned to each operation command so it will be easy to evaluate later
	int prec_value;
};
#endif