#include <stdio.h>
#include <float.h>
int main(){
//	整数类型
	printf("int of size: %lu\n",sizeof(int));

//	浮点类型
	printf("float of size: %lu\n",sizeof(float));
	printf("float min: %E\n",FLT_MIN);
	printf("float max: %E\n",FLT_MAX);
	printf("float 精度值: %d\n",FLT_DIG);
	return 0;	
}
