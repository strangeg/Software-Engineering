// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

Factorial_Command::Factorial_Command (void)
{
	
}

int evaluate (int n1)
{
	int result = 1;
	for (int i = 1; i <= n1; i++)
	{
		result *= i;
	}
	return result;
}

Factorial_Command::~Factorial_Command (void)
{
	
}