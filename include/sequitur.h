#pragma once
#include <vector>
#include <string>

// This file contains the core functions for compression and decompression.

// Structures for command line argument parsing.
enum class Mode
{
	DECOMPRESS,
	COMPRESS,
	HELP,
	ERROR
};

struct Config {
	Mode mode;
	unsigned int blockSize = 1024;

	/**
	 * @brief Validate command line arguments passed to the program.
	 * @param args A vector of command line arguments
	 * @return A struct representing the subcommand to run and the block size (for
	 * compression).
	 */
	Config(const std::vector<std::string>& args);
};
