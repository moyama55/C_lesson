#include <stdio.h>
#include <String.h>

void printIntByAddress(int*);

int main(void){
    int a = 1;
    printIntByAddress(&a);
    return 0;
}

void printIntByAddress(int* b){
    printf("addrss is : %d",b);
}