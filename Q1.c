//
// Created by carpe-bleue on 27/11/24.
//

#include "Q1.h"

void welcome(){
    write(STDOUT_FILENO,welcome_msg,strlen(welcome_msg)); //fd stands for the permission here 1 is std_out
}