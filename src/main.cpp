#include "sequitur.h"

int main(int argc, char* argv[]) {
	std::vector<std::string> args(argv, argv + argc);
	Config config(args);

	return 0;
}
