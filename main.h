#include <vector>
#include <string>
#include <fstream>

std::string read_input_path(int argc, char *argv[]) {
    std::string input_file;

    for (int i =0; i < argc; i++) {
        if (std::string(argv[i]) == "-i") {
            input_file = argv[i+1];
        }
    }

    return input_file;
}

std::string read_output_path(int argc, char *argv[]) {
    std::string output_file;

    for (int i =0; i < argc; i++) {
        if (std::string(argv[i]) == "-o") {
            output_file = argv[i+1];
        }
    }

    return output_file;
}

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