#include <stdio.h>

int* add1(int a[],int size);

int main(){
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int length=sizeof(a)/sizeof(a[0]);

	int i; 
    printf("%s\n","ԭʼ����");  
    for(i=0;i<length;i++)
        printf("a[%d] = %d\n",i,a[i] );

// �������������
    int *p=add1(a,length);
    printf("%s\n","�޸ĺ������");  
    for(i=0;i<length;i++)
        printf("a[%d] = %d\n",i,*(p+i));

    return 0;
}

//�Ӻ�����������
int* add1(int a[],int size){
    int i;
    for(i=0;i<size;i++){
        a[i]+=1;
    }
    return a;
}
