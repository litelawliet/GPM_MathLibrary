#include <iostream>
#include <GPM/GPM.h>

int main(const int p_argc, char** p_argv)
{
	try
	{
		// Try stuff here
		Matrix4F rot = GPM::Matrix4F::Orthographic(0, 800, 600, 0);

		std::cout << rot;
	}
	catch (const std::exception & e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}