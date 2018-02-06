#include <stdio.h>

int main(){
    int num;

    printf("please input a number : \n");

    scanf("%d",&num);//&取址符号不能丢

    printf("num = %d\n", num);

    return 0;
}