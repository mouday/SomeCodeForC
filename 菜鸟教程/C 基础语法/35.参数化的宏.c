#include <stdio.h>

#define square(x) ((x)*(x))

#define MAX(x,y) ((x)>(y)?(x):(y))

// 不使用中间变量，两种方法实现
#define SWAP1(x,y) {x=x+y;y=x-y;x=x-y;}
#define SWAP2(x,y) {x=x^y;y=x^y;x=x^y;}

int main(){
    printf("max of is : %d\n", MAX(12,30));
    
    int a=3;
    int b=5;
    printf("交换前：a = %d  b = %d\n",a,b );
    SWAP1(a,b);
    printf("交换后：a = %d  b = %d\n",a,b );

    int c=5;
    int d=6;
    printf("交换前：c = %d  d = %d\n",c,d );
    SWAP2(c,d);
    printf("交换后：c = %d  d = %d\n",c,d );
    return 0;
}

