#include <iostream>
#include <string>
#include "helpers.cpp"
using namespace std;

int main(int argc, char* argv[]) {
    string file;
    // Check if there is an argument (other than the executable)
    if (argc > 1) {
        // Get the file from the first argument
        file = argv[1];

        // Remove pre- and suffix (if present)
        string prefix = ".\\";
        remove_prefix(file, prefix);
        string suffix = ".cpp";
        remove_suffix(file, suffix);
    } else {
        // Default to `main`
        file = "main";
    }

    // Create `g++` command
    string cmd = "g++ -g .\\" + file + ".cpp -o .\\" + file + ".exe";

    // Return the result of calling the command
    return system(cmd.c_str());
}
