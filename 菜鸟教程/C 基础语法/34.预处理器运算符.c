#include <stdio.h>

// C 预处理器只不过是一个文本替换工具而已,简称cpp  C Preprocessor

//宏延续运算符（\）
#define message_for(a,b) \
    printf(#a " and " #b ": we love you!\n")
//字符串常量化运算符（#）

// 标记粘贴运算符（##）
#define tokenpaster(n) printf("token" #n " = %d",token##n)

#if !defined (MESSAGE)
    #define MESSAGE "you wish!"
#endif

int main(){
    message_for(carole,debor);

    int token34=40;
    tokenpaster(34);

    printf("message : %s\n",MESSAGE);
    return 0;
}