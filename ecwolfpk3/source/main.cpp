#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string.h>
#include "configread.hpp"

int main(int argc, char** argv) {
	std::string cFile = "source/paths.ccf";
	std::vector<std::string> paths = ReadConfig(cFile.c_str());

	if(argc >= 3) {
		if(std::string(argv[1]) == "-l" && paths.size() == 2) {
			std::string lz = paths[1] + " -file " + argv[2]; // argv[2] = path to pk3
			system(lz.c_str());							// lzwolf
		}
		else if(std::string(argv[1]) == "-e" && paths.size() > 0) {
			std::string ec = paths[0] + " -file " + argv[2];
			system(ec.c_str());							// ecwolf
		}
		else if(std::string(argv[1]) == "-h") {
			system("cat source/.docs/help.txt");					// help
		}
		else {
			printf("Unkown argument, run '-h all' for help\n");
		}
	} else {
		printf("run '-h all' for help\n");
	}

 return 0;
}
