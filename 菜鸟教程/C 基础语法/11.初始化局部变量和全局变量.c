// 初始化局部变量和全局变量
#include <stdio.h>

// 当局部变量被定义时，系统不会对其初始化，您必须自行对其初始化。
// 定义全局变量时，系统会自动对其初始化
// 全局变量
int a=20;
int i;
char c;
float f;
double d;
int *p;
int main()
{
    // 局部变量
    int a=10;
    printf("value of a = %d\n", a);
    printf("value of i = %d\n", i);
    printf("value of c = %c\n", c);
    printf("value of f = %f\n", f);
    printf("value of d = %f\n", d);
    printf("value of p = %p\n", p);
    return 0;
}