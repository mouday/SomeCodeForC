#include <stdio.h>
#include <time.h>


void getTime(long unsigned *t){
    *t=time(NULL);
    return;
}

int main(){
    long unsigned t;
    getTime(&t);
    printf("%ld\n",t);
    return 0;
}

