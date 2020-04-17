//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Square_Root_Command_H_
#define _Square_Root_Command_H_

/**
 * @class Square_Root_Command
 *
 *
 */
class Square_Root_Command : public Unary_Op_Command
{
public:
	//default constructor
	Square_Root_Command (void);
	
	int evaluate (int n1);
	
	//destructor
	~Square_Root_Command (void);
};
#endif