#include <stdio.h>
#include <stdarg.h>

double average(int num,...){
    va_list valist;
    double sum=0.0;
    int i;

    /* 为 num 个参数初始化 valist */
    va_start(valist,num);

    /* 访问所有赋给 valist 的参数 */
    for(i=0;i<num;i++){
        sum+=va_arg(valist,int);
    }

    /* 清理为 valist 保留的内存 */
    va_end(valist);

    return sum/num;
}

int main(){
    printf("%f\n",average(4, 2,3,4,5));
    printf("%f\n",average(9, 2,3,4,5,6,7,8,9,10));
    return 0;
}
/*
具体步骤如下：
1、使用 stdarg.h 头文件
2、定义一个函数，最后一个参数为省略号（...），省略号前面可以设置自定义参数。
3、在函数定义中创建一个 va_list 类型变量，该类型是在 stdarg.h 头文件中定义的。
4、使用 int 参数和 va_start 宏来初始化 va_list 变量为一个参数列表。宏 va_start 是在 stdarg.h 头文件中定义的。
5、使用 va_arg 宏和 va_list 变量来访问参数列表中的每个项。
6、使用宏 va_end 来清理赋予 va_list 变量的内存。
*/

//.函数参数的传递存储在栈中,从右至左压入栈中,压栈过程为递减
