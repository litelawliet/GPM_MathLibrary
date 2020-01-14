#include <iostream>
#include <GPM/GPM.h>

int main(const int p_argc, char** p_argv)
{
	try
	{
		// Try stuff here
		Matrix4F proj = GPM::Matrix4F::Perspective(GPM::Tools::Utils::ToRadians(45.0f), 800/static_cast<float>(600), 0.1f, 10.0f);
		proj.m_data[5] = proj[5] * -1;
		std::cout << proj;
	}
	catch (const std::exception & e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}