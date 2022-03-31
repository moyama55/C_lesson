#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isLeapYear(int year);

int main(void){
    int year = 2020;
    bool leapYear;
    leapYear = isLeapYear(year);
    if(leapYear){
        printf("%d year is leapyear",year);
    }else{
        printf("%d year is not leapyear",year);
    }
    return 0;
}

bool isLeapYear(int year){
    bool leap = false;
    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
        leap = true;
    }
    return leap;
}