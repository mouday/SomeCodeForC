#include <stdio.h>
//�������� 
void foo(void);

static int count =10; /* ȫ�ֱ��� - static ��Ĭ�ϵ� */

int main(){
	while(count--){
		foo();
	}
	return 0;
} 

void foo(void){
/* 'thingy' �� 'foo' �ľֲ����� - ֻ��ʼ��һ��
 * ÿ�ε��ú��� 'foo' 'thingy' ֵ���ᱻ���á�
 */      
	static int thingy=5;
	thingy++;
	printf("thingy = %d , count = %d \n",thingy,count);
} 
