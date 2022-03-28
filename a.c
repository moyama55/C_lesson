#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void){
    printf("Hit num game\nhit 3 digits num\nhowever not dupulicate each digits\n");
    srand((unsigned)time(NULL));
    int countBrow = 0;
    int countHit = 0;
    int input[3];
    //重複しないよう乱数の作成が課題
    int answer_0 = rand() % 9;
    int answer_1 = rand() % 9;
    int answer_2 = rand() % 9;
    int answers[] = {answer_0,answer_1,answer_2};
    start:
    for(int i = 0; i < 3;i++){
        printf("input %d digit predict for 0 ~ 9 num:\n",i+1);
        String inputChar;
        scanf("%s",inputChar);
        int inputNum = atoi(inputChar);
        input[i] = inputNum;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(answers[i] == input[j] && i == j){
                countHit++;
            }else if(answers[i] == input[j]){
                countBrow++;
            }
        }
    }
    printf("Hit:%d,Brow:%d",countHit,countBrow);
    if(countHit == 3){
        printf("End");
    }else{
        printf("continue?(0:end, others 0:continue)");
        String choice;
        scanf("%s",choice);
        int choiceNum = atoi(choice);
        if(choiceNum){
            countBrow = 0;
            countHit = 0;
            goto start;
        }else{
            printf("End");           
        }
    }
    return 0;
}