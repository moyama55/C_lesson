#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    printf("Generation 4 digit PIN\n");
    srand((unsigned)time(NULL));
    int a = rand() % 10;
    int b = rand() % 10;
    int c = rand() % 10;
    int d = rand() % 10;
    printf("PIN: %d%d%d%d",a,b,c,d );
    return 0;
}