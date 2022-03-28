#include <stdio.h>

int main(void){
    int scores[] = {88, 61, 90, 75, 93};
    int highPoint = 0;
    int lowPoint = 100;
    int average = 0;
    for(int i = 0; i < 5; i++){
        average += scores[i];
        if(highPoint < scores[i]){
            highPoint = scores[i];
        }
        if(lowPoint > scores[i]){
            lowPoint = scores[i];
        }   
    }
    average /= 5;
    printf("Highest: %d\nlowest: %d\naverage: %.1f",highPoint,lowPoint,(double)average);
}