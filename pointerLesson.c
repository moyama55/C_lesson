#include <stdio.h>
#include <string.h>

void sub(char ages[3]);

int main(void){
    char a[] = {1,2,3};
    char b[3];
    sub(&a[0]);
    memcpy(b, a, 3);
    sub(&b[0]);
    char* c = malloc(12);
    memcpy(&c, &b, 12);
    if(memcmp(a, b, 3) == 0){
        printf("right copy");
    }
    return 0;
}

void sub(char* ages){
    for(int i = 0; i < 3; i++){
        printf("%dsecond:%d\n", i+1,ages[i]);
    }
}