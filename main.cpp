#include <iostream>
#include <fstream>
#include <vector>

#include "main.h"

int main(int argc, char *argv[]){
    std::string input_file = read_input_path(argc, argv);
    std::string output_file = read_output_path(argc, argv);

    std::vector<std::string> lines = read_file(input_file);

    // Do whatever your program has to do

    write_file(output_file, lines);

    return 0;
}