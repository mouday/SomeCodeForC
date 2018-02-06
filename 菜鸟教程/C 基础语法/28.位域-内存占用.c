#include <stdio.h>

/* 定义简单的结构 */
struct{
    unsigned int width;
    unsigned int height;
}status1;

// 宽度必须小于或等于指定类型的位宽度
/* 定义位域结构 */
struct{
    unsigned int width:1;
    unsigned int height:1;
}status2;

int main(){
    printf("size of status1 = %d\n",sizeof(status1));
    printf("size of status2 = %d\n",sizeof(status2));
    return 0;
}

// 带有预定义宽度的变量被称为位域