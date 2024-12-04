//
// Created by carpe-bleue on 27/11/24.
//

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Q1.h"
#include "Q2.h"
#include "Q3.h"

char buf[BUFSIZE];

int main(int argc, char *argv[]){
     welcome();
     while (1) {
          read_command(buf);
          exec_command(buf,&sons_exec_status);
          command_exit(buf);

     }

}