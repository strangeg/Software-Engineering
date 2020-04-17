//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Calculator_H_
#define _Calculator_H_

#include "Eval_Tree.h"
#include "Tree_Builder.h"


#include <iostream>
#include <sstream>
#include <map>
#include <memory>

/**
*@class Calculator
* Calculator class to handle the evaluation and cleanup of an expression entered
*
*
*/

class Calculator
{
public:
	Calculator (Tree_Builder & builder);
	int evaluate(const std::string & infix);
	bool parse_expr(const std::string & infix);
	bool var_check (const std::string & infix);
	void parse_var (void);
	~Calculator (void);
	
private:
	Tree_Builder builder_;
	std::map<std::string, int> var_map;
};
#endif