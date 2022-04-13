#include <stdlib.h>
#include <time.h>
#include "sub.h"

int createRand(int max)
{
    srand((unsigned)time(NULL));
    return (rand() % max) + 1;
}
