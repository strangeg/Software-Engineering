//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Factorial_Command_H_
#define _Factorial_Command_H_

/**
 * @class Factorial_Command
 *
 *
 */
class Factorial_Command : public Unary_Op_Command
{
public:
	//default constructor
	Factorial_Command (void);
	
	int evaluate (int n1);
	
	//destructor
	~Factorial_Command (void);
};
#endif