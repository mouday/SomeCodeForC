#include <stdio.h>
#include "PrintArray.h"//打印数组

//别忘记声明
void bubbleSort(int array[], int n);
void bubbleSort2(int array[], int n);

int main()
{
    int array[]={1,3,5,7,9,2,4,6,8,10,11,12};
    printArray(array,12);
    bubbleSort(array,12);
    printArray(array,12);
    return 0;
}

// 冒泡排序，平均的时间复杂度为O(n^2 )
void bubbleSort(int array[], int n)
{
    int count=0;
    int i,j;
    for(i=0;i<n;i++)//遍历所有元素
    {
        for(j=0;j<n-1-i;j++)//遍历无序区
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;          
            }
			count++;
        }
    }
    printf("%d\n",count);
}

// 冒泡排序,增加交换标识符
void bubbleSort2(int array[], int n)
{
    int i,temp;
    int count=0;
    //记录位置，当前所在位置和最后发生交换的地方
    int current,last=n-1;
    while(last>0)//遍历所有元素
    {
        for(i=current=0;i<last;i++)//遍历无序区
        {
            if(array[i]>array[i+1])
            {
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;              
                current=i;
            }
			count++;
        }
       last=current;
    }
    printf("%d\n",count);
}



