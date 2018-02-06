#include <stdio.h>

int main(){
    printf("File : %s\n",__FILE__);//当前文件名
    printf("File : %s\n",__DATE__);//当前日期
    printf("File : %s\n",__TIME__);//当前时间
	printf("File : %s\n",__STDC__);//当编译器以 ANSI 标准编译时，则定义为 1
    printf("File : %s\n",__LINE__);//当前行号
    
    return 0;
}
