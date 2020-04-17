//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Number_Node_H_
#define _Number_Node_H_

#include "Node.h"

class Number_Node : public Node
{
public:
	Number_Node (void);
	Number_Node (int num);
	virtual ~Number_Node (void);
	
	virtual void accept (Node_Visitor & v);
	
	int get_num_val (void) const;

private:
	int n_;
};
#endif