#include <algorithm>
#include "sequitur.h"

using namespace std;

// Find the index of a string inside a vector of strings
int stringIndex(const string& key, const vector<string>& list) {
	for (int i = 0; i < list.size(); i++)
		if (key.compare(list[i]) == 0)
			return i;

	return -1;
}

Config::Config(const vector<string>& args) {
	// Check for invalid number of arguments
	if (args.size() <= 1) {
		mode = Mode::ERROR;
		return;
	}

	// Check for first index of the -h flag
	int hIndex = stringIndex("-h", args);
	
	if (hIndex == 1) {
		mode = Mode::HELP;
		return;
	}

	if (hIndex == 0 || hIndex > 1) {
		mode = Mode::ERROR;
		return;
	}
}