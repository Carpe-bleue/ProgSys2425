//
// Created by carpe-bleue on 27/11/24.
//
#include <unistd.h>


#define BUFSIZE 128

int main(int argc, char *argv[]) {
    int fd = 1;
    const char *message = "Bienvenue dans le Shell ENSEA.\nPour quitter, tapez 'exit'.\nenseah \n";

    write(fd,message,70); //fd stands for the permission here 1 is std_out


    return(0);
}