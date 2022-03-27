#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void){
    printf("Hit num game\nyou have 4 time chance\nput a digit number\n");
    srand((unsigned)time(NULL));
    int answer = rand() % 10;
    String input;
    int count = 1;
    for(int i = 0;i < 4;i++){
        scanf("%s",input);
        int num = atoi(input);
        if(num == answer){
            printf("Good!! you guess it %d challenge\n",count);
            break;
        }else{
            if(num > answer){
                printf("Inputnum is bigger than answernumber\n");
                count++;
            }else if(num < answer){
                printf("Inputnum is smaller than answernumber\n");
                count++;
            }
        }
        if(i == 3&&num != answer){
            printf("answer is %d",answer);
        }
    }
    return 0;
}