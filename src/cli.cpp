//
// Created by User on 17/11/2023.
//
#include <filesystem>
#include <iostream>

int checkfileexists() {
    std::cout << "hello";
    return (std::filesystem::exists("helloworld.txt"));
}

int handlecmdargs(int argc, char* argv[]) {
    if (argc < 2) {
        return 0;
    }
    int checkFile = checkfileexists();
    std::cout << checkFile;
    return 1;
}
