#include <stdlib.h>
#include <time.h>
#include "sub.h"

int createRand(int max)
{
    srand((unsigned)time(NULL));
    return (rand() % max) + 1;
}

char* selectMsg(int num)
{
    char* rem;

    switch(num){
        case 1:
            rem = "When you give up, thats when the game is over";
            break;
        case 2:
            rem = "He stole something quite precious....your heart";
            break;
        case 3:
            rem = "There's only one truth!";
            break;
    }
    return rem;
}
