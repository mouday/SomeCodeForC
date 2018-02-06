#include <stdio.h>
#include <stdlib.h>
// 回调函数
void populate_array(int *array,size_t arraySize,int(*getNextValue)(void)){
	size_t i;//size_t 是一种数据类型，近似于无符号整型，但容量范围一般大于 int 和 unsigned
    for( i=0;i<arraySize;i++)
    {
        array[i]=getNextValue();
    }
}

// 获取随机值
int getRand(){
    return rand();
}
int main(){
    int myArray[10];
    populate_array(myArray,10,getRand);
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", myArray[i]);
    }
    return 0;
}
