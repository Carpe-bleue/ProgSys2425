//
// Created by carpe-bleue on 04/12/24.
//

#include "Q5.h"

struct timespec startTime;
struct timespec endTime;
struct timespec elapsed;

void start_time() {
    clock_gettime(CLOCK_MONOTONIC, &startTime);
}
void get_time() {
    clock_gettime(CLOCK_MONOTONIC, &elapsed);
    write_int((int)(elapsed.tv_sec)-(int)(startTime.tv_sec));

}
