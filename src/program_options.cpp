//
// Created by User on 19/11/2023.
//

#include "program_options.h"
#include <cstring>
#include <iostream>

int ProgramOptions(int argc, char* argv[]) {
    bool get = false;
    for (int i = 1; i < argc; i++) {
        if (i == 1 && std::strcmp(argv[i], "-m") == 0) {
            // Deal with hashing the master password here and securing memory
            const char* masterPassword = argv[i + 1];
            std::cout << masterPassword << '\n';
            i += 1;
        } else if (i == 3 && std::strcmp(argv[i], "-u") == 0) {
            const char* username = argv[i + 1];
            i += 1;
        } else if (i == 3 && std::strcmp(argv[i], "--get") == 0) {
            get = true;
        }
        //Add a --help
    }
    return 0;
}
