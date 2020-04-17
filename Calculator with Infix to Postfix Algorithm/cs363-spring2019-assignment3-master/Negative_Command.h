//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Negative_Command_H_
#define _Negative_Command_H_

/**
 * @class Negative_Command
 *
 *
 */
class Negative_Command : public Unary_Op_Command
{
public:
	//default constructor
	Negative_Command (void);
	
	int evaluate (int n1);
	
	//destructor
	~Negative_Command (void);
};
#endif