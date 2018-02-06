#include <stdio.h>
#include <string.h>

// 定义共用体
union Data{
    int i;
    float f;
    char str[20];
};

int main(){
    // 访问共用体成员
    union Data data;
    printf("size of Data : %d\n",sizeof(data));

    data.i=10;
    printf("data.i = %d\n", data.i);

    data.f=220.5;
    printf("data.f = %f\n", data.f);

    strcpy(data.str,"c programming");
    printf("data.str = %s\n", data.str);

    printf("data.i = %d\n", data.i);
    printf("data.f = %f\n", data.f);
    printf("data.str = %s\n", data.str);
    printf("size of Data : %d\n",sizeof(data));
    return 0;
}
// 在同一时间只使用一个变量

// 结构体变量所占内存长度是各成员占的内存长度之和。每个成员分别占有其自己的内存单元。
// 共用体变量所占的内存长度等于最长的成员变量的长度。