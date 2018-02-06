#include <stdio.h>
#include <string.h>

int main()
{
    char hello[]="hello";
    char world[]="world";
    char str[12];
    int len;

    /* 复制 str1 到 str3 */
    strcpy(str,hello);
    printf("%s\n", str);//hello

    /* 连接 str1 和 str2 */
    strcat(str,world);
    printf("%s\n", str);//helloworld

    /* 连接后，str1 的总长度 */
    len=strlen(str);
    printf("%d\n", len);

    // 返回一个指针,字符串 s1 中字符 ch 的第一次出现的位置
    char *indexchr=strchr(str,'o');
    printf("%c\n", *indexchr);

    // 返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。
    char *indexstr=strstr(str,"world");
    printf("%c\n", *indexstr);
    return 0;
}
