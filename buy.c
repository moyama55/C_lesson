#include <stdio.h>
#include <stdlib.h>

int main(void){
    int otoshidama1 = 3000;
    int otoshidama2 = 3000;
    int apple = 120;
    int mandarin = 400;
    int appleCount = 0;
    int mandarinCount = 0;
    while(otoshidama1 >= 120){
        otoshidama1 = otoshidama1 - apple;
        appleCount++;
    }
    while(otoshidama2 >= 600){
        otoshidama2 = otoshidama2 - mandarin;
        mandarinCount++;
    }
    printf("apple:%drem:%d\n",appleCount,otoshidama1);
    printf("mandarin:%drem:%d",mandarinCount,otoshidama2);
}