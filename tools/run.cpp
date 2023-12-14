#include <iostream>
#include <string>
#include "./helpers.cpp"
using namespace std;

int main(int argc, char* argv[]) {
    int return_value;

    if (argc <= 1 || argc > 2) {
        cout << "usage: run.exe [<file> | -t]" << endl;
        return 1;
    }
    string arg1 = argv[1];
    if (arg1 == "-t") {
        system(".\\tools\\build.exe .\\tools\\test.cpp");
        return_value = system(".\\tools\\test.exe");
    } else {
        string prefix = ".\\";
        string suffix = ".cpp";
        remove_prefix(arg1, prefix);
        remove_suffix(arg1, suffix);

        string build_cmd = ".\\tools\\build.exe ./" + arg1 + ".cpp";

        system(build_cmd.c_str());
        string run_cmd = ".\\" + arg1 + ".exe";
        cout << "Cmd: " << run_cmd << endl;
        return_value = system(run_cmd.c_str());
    }
    return return_value;
}
