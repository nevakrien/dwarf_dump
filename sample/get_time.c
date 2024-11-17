#include <stdio.h>
#include <time.h>

int main() {
    struct timespec ts;

    // Get the current time
    clock_gettime(CLOCK_MONOTONIC, &ts);

    // Print the time in seconds.nanoseconds format
    printf("%ld.%09ld\n", ts.tv_sec, ts.tv_nsec);

    return 0;
}
