#include <iostream>
#include <fstream>
#include <vector>

std::vector<std::string> read_file(std::string path) {

    std::ifstream source(path);

    std::vector<std::string> lines;
    std::string tmp;

    if (source.is_open()) {

        while(getline(source, tmp)) {
            lines.push_back(tmp);
        }
        source.close();
    }

    return lines;
}

void write_file(std::string path, std::vector<std::string>& lines) {
        std::ofstream destination(path);

    if (destination.is_open()) {
        for(int i = 0; i < lines.size(); i++) {
            destination << lines[i] << "\n";
        }

        destination.close();
    }
}

int main(int argc, char *argv[]){
    std::cout << "Value in argc: " << argc << std::endl;

    std::string input_file, output_file;

    for (int i =0; i < argc; i++) {
        if (std::string(argv[i]) == "-i") {
            input_file = argv[i+1];
        }

        if (std::string(argv[i]) == "-o") {
            output_file = argv[i+1];
        }
    }

    std::cout << "Input file: " << input_file << std::endl;
    std::cout << "Output file: " << output_file << std::endl;

    std::vector<std::string> lines = read_file(input_file);

    // Do whatever your program has to do

    write_file(output_file, lines);
    
    return 0;
}