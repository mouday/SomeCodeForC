#include <stdio.h>

// 位域,不能超过8位二进位
// 位域可以是无名位域,不能使用
struct bs{
    unsigned a:1;
    unsigned b:3;
    unsigned c:4;
}bit, *pbit;

int main(){
    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.a=1;
    bit.b=7;
    bit.c=15;

    /* 以整型量格式输出三个域的内容 */
    printf("%d,%d,%d\n",bit.a,bit.b,bit.c);

    /* 把位域变量 bit 的地址送给指针变量 pbit */
    pbit=&bit;
    /* 用指针方式给位域 a 重新赋值，赋为 0 */
    pbit->a=0;
    /* 使用了复合的位运算符 "&="，相当于：pbit->b=pbit->b&3，位域 b 中原有值为 7，与
     3 作按位与运算的结果为 3（111&011=011，十进制值为 3） */
    pbit->b&=3; 
     /* 使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 15 */
    pbit->c|=1;

    /* 用指针方式输出了这三个域的值 */
    printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);
    return 0;
}
