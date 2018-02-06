#include <stdio.h>
#include "PrintArray.h"//打印数组

//别忘记声明


int main()
{
    int array[]={1,3,5,7,9,2,4,6,8,10,11,12};
    printArray(array,12);
    quickSort(array,0,11);
    printArray(array,12);
    return 0;
}

void quickSort(int array[], int first, int end)
{
    //轴值 pivot
    int pivot=onceSort(array,first,end);
    //对轴值两侧分别排序
    quickSort(array,first,pivot-1);
    quickSort(array,pivot+1,end);

}

void onceSort(int array[],int first,int end)
{
    int i=first, j=end;
    //当i<j即移动的点还没到中间时循环
    while(i<j)
    {
        //右边区开始，保证i<j并且arr[i]小于或者等于arr[j]的时候就向左遍历
        while(i<j && array[i]<=array[j]) --j;
         //这时候已经跳出循环，说明j>i 或者 arr[i]大于arr[j]了，如果i<j那就是arr[i]大于arr[j]，那就交换
        if(i<j)
        {
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }

         //对另一边执行同样的操作
        while(i<j && array[i]<=array[j]) ++i;
        if(i<j)
        {
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
    //返回已经移动的一边当做下次排序的轴值
    return i;
}

