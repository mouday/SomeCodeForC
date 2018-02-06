#include <stdio.h>

int main(){
    int dividend, divisor, quotient, remainder;

    printf("please input two dividend and divisor(split with space):");

    scanf("%d %d", &dividend, &divisor);

    quotient = dividend / divisor;

    remainder = dividend % divisor;

    printf("%d / %d = %d\n",dividend, divisor, quotient);
    printf("%d %% %d = %d\n",dividend, divisor, remainder);
    
    return 0;
}
