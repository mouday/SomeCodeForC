#include<stdio.h>

//�Զ��峣��
//����һ��#define Ԥ���������峣��,����û�ֺţ��� 
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'
 
int main(){
//	������ʾ�ַ��� 
char *s="hello \
world!";
	printf("%s\n",s);
	
	int area;

	area=LENGTH * WIDTH;
	printf("value of area : %d",area);
	printf("%c",NEWLINE);
	
//��������const���峣�����Ƽ���д
	const int MYWIDTH=10;
	const int MYHEIGHT=2;
	int myarea;
	myarea=MYWIDTH * MYHEIGHT;
	printf("myarea of value : %d\n",myarea);
return 0;
}
