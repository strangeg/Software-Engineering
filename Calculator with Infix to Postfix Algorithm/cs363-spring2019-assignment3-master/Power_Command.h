//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Power_Command_H_
#define _Power_Command_H_

/**
 * @class Power_Command
 *
 *
 */
class Power_Command : public Unary_Op_Command
{
public:
	//default constructor
	Power_Command (void);
	
	int evaluate (int n1);
	
	//destructor
	~Power_Command (void);
};
#endif