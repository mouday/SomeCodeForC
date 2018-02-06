#include <stdio.h>
#include "PrintArray.h"//打印数组

//别忘记声明
void insertSort(int array[],int n);
void insertSort2(int array[],int n);

int main()
{
    int array[]={1,3,5,7,9,2,4,6,8};
    printArray(array,9);
    insertSort2(array,9);
    printArray(array,9);
    return 0;
}

// 直接插入排序,平均的话要比较时间复杂度为O(n^2 )
void insertSort(int array[],int n)
{
    int i,j;
    int temp;
    for(i=1;i<n;i++)
    {
        j=i-1;
        temp=array[i];
        while(j>=0 && array[j]>temp)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }

}

// 直接插入排序2
void insertSort2(int array[], int n)
{
    for(int i=0; i<n; i++)//扫描整个数组
    {
        for(int j=i; j>0; j--)//从后往前比较，找到合适的位置
        {
            if(array[j] < array[j-1])
            {
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
}


