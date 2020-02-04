#include <iostream>
#include <GPM/GPM.h>

int main(const int p_argc, char** p_argv)
{
	try
	{
		// Try stuff here
		Matrix4F rot = GPM::Matrix4F::LookAt(GPM::Vector3F(0, 0, 0), GPM::Vector3F(0, 0, 3), GPM::Vector3F(0, 1, 0));

		std::cout << rot;
	}
	catch (const std::exception & e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}