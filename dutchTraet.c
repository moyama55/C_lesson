#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int iscanf(void);
int calcPayment(int,int);
void showPayment(int,int,int);

int main(void){
    int amount;
    int people;
    int pay;
    int payorg;

    String inputStr;

    printf("input amont money :");
    amount = iscanf();

    printf("inout total people :");
    people = iscanf();
    
    pay = calcPayment(amount,people);

    payorg = amount - pay * (people - 1);

    showPayment(pay,payorg,people);

    return 0;
}

int iscanf(void){
    String inputStr;
    scanf("%s",inputStr);
    int inputNum = atoi(inputStr);
    return inputNum;
}

int calcPayment(int total,int numberOfPeople){
    double paymentDnum = (double)total / numberOfPeople;
    int payment = (int)(paymentDnum / 100) * 100;
    if(paymentDnum > payment){
        payment += 100;
    }
    return payment;      
}

void showPayment(int pay, int payorg, int people){
    printf("Amount of payment");
    printf("per person%d yen(%d person),org is %d yen\n",pay, people - 1, payorg);
}