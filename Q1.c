//
// Created by carpe-bleue on 27/11/24.
//

#include "main.h"

void q1() {
    const int fd = 1;
    const char *message = "Bienvenue dans le Shell ENSEA.\nPour quitter, tapez 'exit'.\nenseash % \n";

    write(fd,message,strlen(message)); //fd stands for the permission here 1 is std_out
}