#include <stdio.h>

const int MAX=3;

int main(){
    int nums[]={1,2,3};
    int *p=nums;
    
    for(int i=0;i<MAX;i++){
        printf("address : %p -- value : %d\n",p,*p);
        p++;
    }
    return 0;
}