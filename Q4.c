//
// Created by carpe-bleue on 04/12/24.
//

#include "Q4.h"

void write_int(int num) {
    printf("%d\n", num);
}

void return_status(int status) {
    if (WIFEXITED(status) != 0) {          // checks the exit status of a child process
        write(STDOUT_FILENO, "exit :" , 7);
        write_int(WEXITSTATUS(status));
    }
    else if (WIFSIGNALED(status)) {        // child process was terminated
        write(STDOUT_FILENO, "signal :",12);
        write_int(WTERMSIG(status));
    }
}
