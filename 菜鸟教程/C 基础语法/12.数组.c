#include <stdio.h>

int main(){
    int nums[10];
    int i;//C99，C11可以在for中定义
    for(i=0;i<10;i++){
        nums[i]=i;
    }
    for(i=0;i<10;i++){
        printf("nums[%d] = %d\n",i,nums[i]);
    }
    return 0;
}
