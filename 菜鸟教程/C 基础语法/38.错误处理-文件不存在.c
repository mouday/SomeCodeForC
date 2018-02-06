// 0 值表示程序中没有错误
#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main(){
    FILE *fp;
    int errnum;
    fp=fopen("unexist.txt","rb");
    if (fp==NULL){
        errnum=errno;
        fprintf(stderr, "错误号：%d\n", errno);
        perror("通过perror输出错误");
        fprintf(stderr, "打开文件错误：%s\n",strerror(errnum));
    }
    else
    {
        fclose(fp);
    }
    return 0;
}
