#include <iostream>
#include <GPM/GPM.h>

int main(const int p_argc, char** p_argv)
{
	try
	{
		// Try stuff here		
	}
	catch (const std::exception & e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}