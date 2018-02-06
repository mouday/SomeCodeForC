#include <stdio.h>

int* add1(int a[],int size);

int main(){
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int length=sizeof(a)/sizeof(a[0]);

	int i; 
    printf("%s\n","原始数组");  
    for(i=0;i<length;i++)
        printf("a[%d] = %d\n",i,a[i] );

// 传递数组给函数
    int *p=add1(a,length);
    printf("%s\n","修改后的数组");  
    for(i=0;i<length;i++)
        printf("a[%d] = %d\n",i,*(p+i));

    return 0;
}

//从函数返回数组
int* add1(int a[],int size){
    int i;
    for(i=0;i<size;i++){
        a[i]+=1;
    }
    return a;
}
