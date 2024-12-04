//
// Created by carpe-bleue on 04/12/24.
//

#ifndef Q2_H
#define Q2_H

#include <sys/wait.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>

#define msg_welcome "Bienvenue dans le shell de l'ENSEA. \n Pour quitter, tapez 'exit'. \n "

void read_command(char *buf);
void exec_command(char *command, int *status);

#endif //Q2_H
