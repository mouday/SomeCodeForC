#include <stdio.h>

int main(){
    char str[100];
	printf("please input a string:\n");
    gets(str);       //	char *gets(char *s) 
		
    printf("string of you input is :");
	puts(str);//  int puts(const char *s) 
    return 0;
}
