//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Sub_Command_H_
#define _Sub_Command_H_

#include "Binary_Op_Command.h"
/**
 * @class Sub_Command
 *
 *
 */
class Sub_Command : public Binary_Op_Command
{
public:
	//default constructor
	Sub_Command (Stack <int> & s);
	
	int evaluate (int n1, int n2) const;
	
	//destructor
	~Sub_Command (void);
};
#endif