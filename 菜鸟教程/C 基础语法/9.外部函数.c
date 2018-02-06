#include<stdio.h>

extern int max(int a,int b);

int main(){
    
    int ret=max(1,2);
    printf("%d",ret);
    return 0;
}

