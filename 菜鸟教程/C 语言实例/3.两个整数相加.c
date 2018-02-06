#include <stdio.h>

int main(){
    int firstNumber,secondNumber,sumOfTwoNumbers;

    printf("please input two number(split with space):");

    scanf("%d %d",&firstNumber,&secondNumber);

    sumOfTwoNumbers=firstNumber+secondNumber;

    printf("%d + %d = %d\n",firstNumber,secondNumber,sumOfTwoNumbers );
    return 0;
}