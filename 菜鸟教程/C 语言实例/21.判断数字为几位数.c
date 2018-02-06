#include <stdio.h>

int main(){
    int num=-123;
    int count=0;
    while(num!=0){
        num/=10;
        count++;
    }
    printf("%d\n",count );
    return 0;
}