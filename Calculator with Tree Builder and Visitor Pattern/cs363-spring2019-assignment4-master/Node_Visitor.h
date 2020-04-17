//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Node_Visitor_H_
#define _Node_Visitor_H_
class Add_Node;
class Sub_Node;
class Mult_Node;
class Mod_Node;
class Div_Node;
class Number_Node;

class Node_Visitor
{
public:
	virtual ~Node_Visitor (void);
	
	//changed each method to pure virtual since without it, each method required implementation in this class
	//pretty much just turning this into visitor interface for Eval_Tree class
	virtual void Visit_Add_Node (const Add_Node & node) = 0;
	virtual void Visit_Sub_Node (const Sub_Node & node) = 0;
	virtual void Visit_Mult_Node (const Mult_Node & node) = 0;
	virtual void Visit_Mod_Node (const Mod_Node & node) = 0;
	virtual void Visit_Div_Node (const Div_Node & node) = 0;
	virtual void Visit_Number_Node (const Number_Node & node) = 0;
	
};
#endif