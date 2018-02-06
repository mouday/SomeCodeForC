#include <stdio.h>

int main(){
    float f;
	char str[100];
		
    printf("please input a number and a string : \n");
    
    //int scanf(const char *format, ...)
    //在读取字符串时，只要遇到一个空格，scanf() 就会停止读取
	scanf("%f %s",&f,str);
	
	//int printf(const char *format, ...)
    printf("value = %f\nstring = %s\n", f,str);
    
    return 0;
}
