//
// Created by User on 19/11/2023.
//

#include "program_options.h"
#include <cstring>
#include <iostream>

char* GetMasterPassword(char* argv[]) {
    if (std::strcmp(argv[1], "-m") == 0) {
        const char* masterPassword = argv[2];
        std::cout << masterPassword << '\n';
        return argv[1];
    } else {
        throw std::invalid_argument("User --help for argument usage");
    }
}

bool CheckGet(char* argv[]) {
    if (argv[3] && std::strcmp(argv[3], "--get") == 0) {
        return true;
    }
    return false;
}

int UseGet(int argc, char* argv[]) {
    for (int i = 3; i < argc; i++) {
        if (i == 3 && std::strcmp(argv[i], "-u") == 0) {
            const char *username = argv[i + 1];
            i += 1;
        } else if (i == 3 && std::strcmp(argv[i], "-t") == 0) {
            const char *title = argv[i + 1];
            i += 1;
        } else if (i == 5 && std::strcmp(argv[i], "-p") == 0) {
            const char *password = argv[i + 1];
            // Handle safe memory and encryption
            i += 1;
        } else {
            throw std::invalid_argument("User --help for argument usage");
        }
    }
    return 0;
}

int UseMake(int argc, char* argv[]) {
        //Add a --help
    return 0;
}
void PrintHelp() {
    std::cout << "Argument usage:";
}

int ProgramOptions(int argc, char* argv[]) {
    char* masterPassword = GetMasterPassword(argv);

    //Handle hash of master password and memory protection
    //...

    bool get = CheckGet(argv);

    if (get) {
        int i = UseGet(argc, argv);
    } else {
        int q = UseMake(argc, argv);
    }

    return 0;
}
