//
// Created by carpe-bleue on 27/11/24.
//

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "Q1.h"
#include "Q2.h"
#include "Q3.h"
#include "Q4.h"
#include "Q5.h"

char buf[BUFSIZE];

int main(int argc, char *argv[]){
     welcome();
     start_time();
     while (1) {
          read_command(buf);
          get_time();
          return_status(sons_exec_status);
          exec_command(buf,&sons_exec_status);
          command_exit(buf);

     }

}