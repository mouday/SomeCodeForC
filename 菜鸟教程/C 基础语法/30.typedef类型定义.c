#include <stdio.h>
#include <string.h>

// 为数值定义别名
#define TRUE 1
#define FALSE 0

//  typedef 自定义的数据类型取一个新的名字
typedef struct Books{
    char  title[50];
    char author[50];
    char subject[100];
    int bookId;
}Book;

typedef unsigned int unint;//typedef 定义别名

int main(){
    Book book;
    unint i;

    strcpy(book.title,"c 教程");
    strcpy(book.author,"Runood");
    strcpy(book.subject,"编程语言");
    book.bookId=123456;

    printf("book.title : %s\n",book.title);
    printf("book.author : %s\n",book.author);
    printf("book.subject : %s\n",book.subject);

    printf("TRUE = %d\n", TRUE);
    printf("FALSE = %d\n", FALSE);

    printf("i = %d\n", sizeof(i));

    return 0;
}
/*
typedef 仅限于为类型定义符号名称，
#define 不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义 1 为 ONE。

typedef 是由编译器执行解释的，
#define 语句是由预编译器进行处理的。
*/