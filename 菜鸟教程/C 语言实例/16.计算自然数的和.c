#include <stdio.h>

// 使用 for
int getSumByFor(int num){
    int i,sum=0;
    for(i=1;i<=num;i++)
    {
        sum+=i;
    }
    return sum;
}

// 使用 while
int getSumByWhile(int num){
    int i=1,sum=0;
    while(i<=num){
        sum+=i;
        i++;
    }
    return sum;
}

// 使用递归
int getSumByRecursion(int num){
    if(num!=0){
        return num+getSumByRecursion(num-1);
    }
    else{
        return num;
    }
}

int main(){
    int num=10;

    int sumByFor=getSumByFor(num);
    int sumByWhile=getSumByWhile(num);
    int sumByRecursion=getSumByRecursion(num);

    printf("getSumByFor(%d) = %d\n", num,sumByFor);
    printf("getSumByWhile(%d) = %d\n", num,sumByWhile);
    printf("getSumByRecursion(%d) = %d\n", num,sumByRecursion);

    return 0;
}