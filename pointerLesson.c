#include <stdio.h>
#include <string.h>

void sub(char* addr){
    for(int i =0; i < 3; i++){
        printf("%d:%d\n",i + 1, *(addr + i));
    }
}

int main(void){
    char a[] = {1, 2, 3};
    char b[3];
    sub(&a);
    memcpy(b, a, 3);
    sub(&b);
    if(memcmp(a, b, 3) == 0){
        printf("Critical copy\n");
    }

    return 0;
}