#include<stdio.h>

int main(){
    int a=10;
    int b=5;
    printf("异或操作：%d ^ %d = %d\n",a,b,a^b); 
    printf("与操作：%d & %d = %d\n",a,b,a&b); 
    printf("或操作：%d | %d = %d\n",a,b,a|b); 
    printf("非操作：~ %d = %d\n",a,~b);
}

