#include <stdio.h>
#include <float.h>
int main(){
//	��������
	printf("int of size: %lu\n",sizeof(int));

//	��������
	printf("float of size: %lu\n",sizeof(float));
	printf("float min: %E\n",FLT_MIN);
	printf("float max: %E\n",FLT_MAX);
	printf("float ����ֵ: %d\n",FLT_DIG);
	return 0;	
}
