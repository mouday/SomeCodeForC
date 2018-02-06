#include<stdio.h>

//自定义常量
//方法一：#define 预处理器定义常量,后面没分号！！ 
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'
 
int main(){
//	换行显示字符串 
char *s="hello \
world!";
	printf("%s\n",s);
	
	int area;

	area=LENGTH * WIDTH;
	printf("value of area : %d",area);
	printf("%c",NEWLINE);
	
//方法二：const定义常量，推荐大写
	const int MYWIDTH=10;
	const int MYHEIGHT=2;
	int myarea;
	myarea=MYWIDTH * MYHEIGHT;
	printf("myarea of value : %d\n",myarea);
return 0;
}
