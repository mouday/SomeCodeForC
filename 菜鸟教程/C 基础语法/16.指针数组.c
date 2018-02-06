#include <stdio.h>

const int MAX=5;

int main(){
    int nums[]={1,2,3,4,5};
    int *p[MAX];//指针数组
    int i;
    for(i=0;i<MAX;i++){
        p[i]=&nums[i];
    }
    for(i=0;i<MAX;i++){
        printf("value of nums[%d] = %d\n",i,*p[i]);
    }
    return 0;
}