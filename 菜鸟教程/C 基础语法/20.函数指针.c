#include <stdio.h>

int max(int a,int b){
    return (a>b)?a:b;
}

int main(){
     /* p 是函数指针 */
    int (*p)(int ,int)=&max;// &可以省略
    int a=1,b=2;
    int d=p(a,b);
    printf("d = %d\n",d);
    return 0;
}
