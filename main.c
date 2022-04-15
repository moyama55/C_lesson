#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sub.h"

int main(void)
{
    int rand = createRand(3);
    char* msg = selectMsg(rand);
    printf("%s",msg);
    return 0;
}