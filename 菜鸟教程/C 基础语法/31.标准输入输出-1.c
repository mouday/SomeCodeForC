#include <stdio.h>

int main(){
    float f;
	char str[100];
		
    printf("please input a number and a string : \n");
    
    //int scanf(const char *format, ...)
    //�ڶ�ȡ�ַ���ʱ��ֻҪ����һ���ո�scanf() �ͻ�ֹͣ��ȡ
	scanf("%f %s",&f,str);
	
	//int printf(const char *format, ...)
    printf("value = %f\nstring = %s\n", f,str);
    
    return 0;
}
