#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void){
    printf("Select number for calender\n");
    printf("and input this sum\n");
    String num1;
    scanf("%s",num1);
    int x = atoi(num1);
    x = x/3;
    printf("select number is %d,%d,%d",x-7,x,x+7);
    return 0;
}