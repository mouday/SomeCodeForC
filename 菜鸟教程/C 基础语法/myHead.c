#include<stdio.h>

void swap(int *a,int *b){
    int *tmp;
    tmp=a;
    a=b;
    b=tmp;
    return;
}

void printHello(){
	printf("hello");
}
