#include <stdio.h>

int main(){
    double firstNumber,secondNumber,sumOfTwoNumbers;

    printf("please input two number(split with space):");

    scanf("%lf %lf",&firstNumber,&secondNumber);

    sumOfTwoNumbers=firstNumber*secondNumber;

    // %.2lf 保留两个小数点
    printf("%lf * %lf = %.2lf\n",firstNumber,secondNumber,sumOfTwoNumbers );
    return 0;
}