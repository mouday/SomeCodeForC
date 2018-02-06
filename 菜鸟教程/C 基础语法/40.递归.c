#include <stdio.h>

// 数的阶乘
double factorial(unsigned int i){
    if (i<=1) return 1;
    return i*factorial(i-1);
}

//斐波那契数列
int fibonaci(int i){
    if (i==0) return 0;
    if (i==1) return 1;
    return fibonaci(i-1)+fibonaci(i-2);
}

int main(){
    int i;
    for(i=1;i<10;i++)
        printf("%d! = %f\n",i,factorial(i));

    int j;
    printf("%s\n","菲波那切数列:");
    for (j=0;j<10;j++)
        printf("%d\n",fibonaci(j));
    return 0;
}