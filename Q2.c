//
// Created by carpe-bleue on 27/11/24.
//

#include "main.h"

char read_command(char *buf) {
    read(1,buf,BUFSIZE);
}

void exec_command(char * command) {
    int son_exec_status;
    if (fork() == 0) {
        //command[strcspn(command, "\n")] = '\0';
        size_t len = strlen(command);
        if (len > 0 && command[len - 1] == '\n') {
            command[len - 1] = '\0';  // Replace the newline with the null terminator
        }
        execlp(command, command, NULL);
        exit(EXIT_FAILURE);
    }
    else {
        //sleep(&son_exec_status);
    }
}



void q2() {
    char buf[BUFSIZE];
    read_command(buf);
    exec_command(buf);

}



/*
if ((char*)bytesRead == "fortune") {

    // Open a pipe to the "fortune" command and get the output
    FILE *fp = popen("fortune", "r");

    // Check if opening the pipe was successful
    if (fp == NULL) {
        perror("popen");  // If the pipe failed, print the error message
    }

    // Read and print the output of the fortune command line by line
    while (fgets(buf, BUFSIZE, fp) != NULL) {  // fgets reads one line at a time from the file pointer (fortune's output)
        printf("%s", buf);  // Print the current line of fortune's output
    }
}

// Check if the input read from stdin matches the string "date"
else if((char*)bytesRead == "date") {
    // If the input matches "date", output the contents of the buffer (which should be the user input)
    write(STDOUT_FILENO, buf, bytesRead);  // Writes the content of 'buf' to the standard output (console)
}

// If neither "fortune" nor "date" was matched, handle the default case
else {
    // Print the prompt message (likely asking for further input or information)
    write(1, prompt, strlen(prompt));  // Writes the prompt string to the standard output (file descriptor 1)
}
*/