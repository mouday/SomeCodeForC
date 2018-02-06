// 0 值表示程序中没有错误
#include <stdio.h>
#include <stdlib.h>

main(){
    int dividend=20;
    int divisor=1;
    int quotient;

    if (divisor==0){
        fprintf(stderr, "除数为0\n" );
        exit(EXIT_FAILURE);//程序退出状态
    }

    quotient=dividend/divisor;
    fprintf(stderr, "quotient = %d\n",quotient );
    exit(EXIT_SUCCESS);//成功
}
