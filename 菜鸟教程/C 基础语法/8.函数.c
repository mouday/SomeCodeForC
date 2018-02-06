#include<stdio.h>

// 函数声明
int max(int,int);
//或者int max(int num1,int num2);

int main(){
    printf("hello world\n");
    int a=5;
    int b=10;
    int ret=max(a,b);
    printf("in %d and %d max is %d\n",a,b,ret);
    return 0;
}

int max(int a,int b){
    int ret;
    if(a>b){
        ret=a;
    }
    else{
        ret=b;
    }
    return ret;
}