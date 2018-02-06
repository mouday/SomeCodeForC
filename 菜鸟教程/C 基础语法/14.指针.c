#include <stdio.h>

int main(){
    int a=10;
    int b[10];
    int *p=NULL;

    printf("a 的地址：%p\n", &a);
    printf("b 的地址：%p\n", &b);
    
    printf("p 的地址：%p\n", p);
    p=&a;
    printf("p 的地址：%p\n", p);
    printf("p 的内容：%d\n", *p);
    return 0;
}