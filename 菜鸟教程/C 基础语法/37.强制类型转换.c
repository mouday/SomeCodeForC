#include <stdio.h>

int main(){
    int a=5;
    int b=3;

    printf("%d\n", b/a);
    printf("%f\n", (double)b/a);//强制类型转换运算符的优先级大于除法

    char c='c';/* ascii 值是 99 */
    printf("%d\n", a+c);  //整数提升

    float f=a+c;
    printf("%f\n", f);  //整数提升

    return 0;
}

// 如果一个运算符两边的运算数类型不同，先要将其转换为相同的类型，
// 即较低类型转换为较高类型，然后再参加运算