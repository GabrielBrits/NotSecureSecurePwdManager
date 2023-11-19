//
// Created by User on 17/11/2023.
//

#include <iostream>
#include <stdexcept>
#include <cstring>
#include "program_options.h"

int HandleCmdArgs(int argc, char* argv[], bool fileCheck) {
    // Handle if the .pwd file doesn't exist (prompt for one)
    if (argc < 2) {
        return 0;
    } else if (argc > 58) {
        throw std::invalid_argument("received too many arguments, a note's max size is 50 chars");
    }
    int i = ProgramOptions(argc, argv);

    return 1;
}
