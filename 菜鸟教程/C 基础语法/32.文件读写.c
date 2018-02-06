
// 打开文件:
// FILE *fopen( const char * filename, const char * mode );

// 关闭文件:
// int fclose( FILE *fp );

// 写入文件
// int fputc( int c, FILE *fp );
// int fputs( const char *s, FILE *fp );
// int fprintf(FILE *fp,const char *format, ...) 

// 读取文件
// int fgetc(FILE * fp );
// char *fgets(char *buf, int n, FILE *fp );读取 n - 1 个字符,遇到一个换行符 '\n' 或文件的末尾 EOF
// int fscanf(FILE *fp, const char *format, ...)   遇到第一个空格字符时，它会停止读取。

// EOF 是一个定义在头文件 stdio.h 中的常量
#include <stdio.h>
 
int main(){
    FILE *fp=NULL;

    // 写入
    fp=fopen("test.txt","w+");
    fprintf(fp,"this is testing for fprintf\n");
    fputs("this is testing for fputs\n",fp);
    fclose(fp);
    printf("ok\n");

    char buff[255];

    // 读取
    FILE *readFile=NULL;
    readFile=fopen("test.txt","r");
    int c=fgetc(fp);
    printf("0 : %c\n",c);

    fscanf(fp,"%s",buff);
    printf("1 : %s\n",buff);

    fgets(buff,255,readFile);
    printf("2 : %s\n", buff);

    fgets(buff,255,readFile);
    printf("3 : %s\n", buff);
    fclose(readFile);
    return 0;
}
