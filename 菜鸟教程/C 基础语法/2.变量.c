#include <stdio.h>

//	��������
extern int a, b;  //���������Ƕ���
extern int c;
extern float f;

int main(){
//��������
int a,b;   //������Ҳ�Ƕ���
int c;
float f;

/*��ʼ��*/
a= 10;
b = 20;

c= a+ b;
printf("value of c : %d \n",c);

f=70.0/3.0;
printf("value of f : %f \n",f);
 
return 0;
}
