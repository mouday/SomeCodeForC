#include <stdio.h>  //引用系统头文件
#include "myHead.h"  //引用用户头文件,只引用一次头文件

int main(){
    int a=3;
    int b=5;
    printf("调用前： = %d b = %d\n",a,b);
    swap(&a,&b);
    printf("调用后：= %d b = %d\n",a,b);
    printHello();
}
