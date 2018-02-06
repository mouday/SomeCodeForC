#include <stdio.h>

int main(){
    int a=10;
    int *p=&a;
    int **pp=&p;
    
    printf("value of a = %d\n",a);
    printf("value of a = %d\n",*p);
    printf("value of a = %d\n",**pp);
    return 0;
}