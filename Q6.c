//
// Created by carpe-bleue on 04/12/24.
//

#include "Q6.h"



void exec_with_args(int argc, char *argv[],char *command) {
    if (argc < 2) {
        //printf("Not enough arguments\n");
        execvp(argv[0], argv);
    }
    else {

    }


}
