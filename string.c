#include <stdio.h>
#include <string.h>

int main(void){
    char a[] = {49, 50, 51, 52, 53, 0};
    char b[] = "12345";
    int aSize = strlen(&a[0]);
    int bSize = strlen(b);
    printf("asize :%d,bsize: %d",aSize, bSize);
    return 0;
}