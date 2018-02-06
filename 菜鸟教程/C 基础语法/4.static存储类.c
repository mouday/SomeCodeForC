#include <stdio.h>
//函数声明 
void foo(void);

static int count =10; /* 全局变量 - static 是默认的 */

int main(){
	while(count--){
		foo();
	}
	return 0;
} 

void foo(void){
/* 'thingy' 是 'foo' 的局部变量 - 只初始化一次
 * 每次调用函数 'foo' 'thingy' 值不会被重置。
 */      
	static int thingy=5;
	thingy++;
	printf("thingy = %d , count = %d \n",thingy,count);
} 
