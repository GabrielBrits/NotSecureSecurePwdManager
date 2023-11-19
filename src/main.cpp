#include <iostream>
#include "cli.h"
#include <filesystem>

bool CheckFileExists() {
    return (std::filesystem::exists(".pwd"));
}

int main(int argc, char* argv[]) {
    int fileCheck = CheckFileExists();
    int options = HandleCmdArgs(argc, argv, fileCheck);
    if (!options) {
        // Run actual program
    }
    return 0;
}