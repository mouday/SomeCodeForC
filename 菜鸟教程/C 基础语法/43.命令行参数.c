#include <stdio.h>

int main(int argc,char *argv[]){
    printf("program name : %s\n", argv[0]);
    if (argc==2)
    {
        printf("argv[1] = %s\n", argv[1]);
    }
    else if(argc>2){
        printf("too many arguments \n");
    }
    else
    {
        printf("one arguments expected\n");
    }
    return 0;
}

// argv[0] 存储程序的名称，argv[1] 是一个指向第一个命令行参数的指针，
// *argv[n] 是最后一个参数。如果没有提供任何参数，argc 将为 1，
// 否则，如果传递了一个参数，argc 将被设置为 2。