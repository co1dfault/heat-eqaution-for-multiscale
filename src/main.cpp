/**
 * @file   main.cpp
 * @author Nikolai Nikishin <mail@nikishinng.ru>
 * @date   Tue Jun 28 18:48:09 2016
 *
 * @brief
 *
 *
 */

#include <iostream>

/**
 * Main function. Performs one solution of one problem.
 *
 *
 * @return 0 on success
 */
int main(void)
{
#ifdef _OPENMP
	std::cout << "OpenMP is enabled" << endl;
#endif
	// try
	// {
	// 	char *settings_filename = nullptr;
	// 	if (argc > 1)
	// 		settings_file = argv[1];
	// 	auto settings = new Settings(settings_filename);
	// 	auto problem = ProblemGenerator(settings);
	// 	auto solver = SolverGenerator(settings);
	// 	auto solution = solver.solve(problem);
	// 	solution.save(settings.outputfilename);

	// }
	// catch(Exception error)
	// {
	// 	std::cerr << error.msg() << endl;
	// 	std::cerr << "Fatal error. Program was terminated." << endl;
	// }
	return(0);
}
