// sizeof 操作符用于计算变量的字节大小
// sizeof 是 C 语言的一种单目操作符，如C语言的其他操作符++、--等，它并不是函数。

#include <stdio.h>

int main(){
    printf("size of char : %d\n", sizeof(char));
    printf("size of int : %d\n", sizeof(int));
    printf("size of long : %d\n", sizeof(long));
    printf("size of float : %d\n", sizeof(float));
    printf("size of double : %d\n", sizeof(double));
    printf("size of long long : %d\n", sizeof(long long));
    printf("size of long double : %d\n", sizeof(long double));
    return 0;
}