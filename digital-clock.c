#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>
#include <windows.h>

int main(){

    time_t rawtime = 0;
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while(isRunning){

        time(&rawtime);

        pTime = localtime(&rawtime);

        printf("\r%02ld:%02ld:%02ld", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);

        Sleep(1000);
    }

    return 0;
}