// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

Unary_Op_Command::Unary_Op_Command (void)
{
	//leave empty
}

Unary_Op_Command::Unary_Op_Command (Stack <int> & s)
	: s_ (s)
{
	
}

void Unary_Op_Command::execute (void)
{
	int n1 = s_.top();
	s_.pop();
	int result = this->evaluate(n1);
	s_.push (result);
}

Unary_Op_Command::~Unary_Op_Command (void)
{
	//leave empty
}