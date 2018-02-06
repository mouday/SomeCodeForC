#include <stdio.h>
#include <stdlib.h> /*exit()*/
int main(){ 
    char s[100];

    FILE *fp;
    fp=fopen("text.txt","r");
    if(fp==NULL){
        // 文件指针返回 NULL 则退出
        printf("error!");
        exit(1);
    }

    // 读取文本，直到碰到新的一行开始
    fscanf(fp, "%[^\n]", s);
    fclose(fp);
    printf("%s",s);
    return 0;
}
