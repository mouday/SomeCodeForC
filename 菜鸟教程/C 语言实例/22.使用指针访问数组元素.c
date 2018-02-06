#include <stdio.h>

int main(){
    int data[5],i;
    for(i=0;i<5;i++){
        data[i]=i;
    }

    for(i=0;i<5;i++){
        printf("data[%d] = %d\n",i, *(data+i));
    }
  
    return 0;
}