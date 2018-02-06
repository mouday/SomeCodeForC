#include <stdio.h>

int main(){
    int num1=10,num2=15;
    int i,gcd;
    for (i=1;i<=num1 && i<=num2; i++){
        //printf("%d\n", i);
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }
    
    printf("%d 与 %d 的最大公约数为：%d\n",num1,num2,gcd);

    return 0;
}