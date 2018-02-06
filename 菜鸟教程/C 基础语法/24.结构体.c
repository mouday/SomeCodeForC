#include <stdio.h>
#include <string.h>

struct Books  //structure tag 是可选的
{
    char title[50];
    char author[50];
    char subject[100];
    int bookId;
};//structure variables一个或多个结构变量，这是可选的

/* 函数声明 */
void printBook(struct Books book);

int main(){
    /* 声明 Book1，类型为 Books */
    struct Books book1;
    struct Books book2;

    /* Book1 详述 */
    strcpy(book1.title,"c programming");
    strcpy(book1.author,"Nuha Ali");
    strcpy(book1.subject,"c programming Tutorial");
    book1.bookId=654321;

    /* Book2 详述 */
    strcpy(book2.title,"Telecom Billing");
    strcpy(book2.author,"Zara Ali");
    strcpy(book2.subject,"Telecom Billing Tutorial");
    book2.bookId=123456;

    /* 输出 Book1 信息 */
    printBook(book1);

    /* 输出 Book2 信息 */
    printBookByPoint(&book2);

    return 0;
}

// 结构作为函数参数
void printBook(struct Books book){
    printf("book2 title : %s\n", book.title);
    printf("book2 author : %s\n", book.author);
    printf("book2 subject : %s\n", book.subject);
    printf("book2 bookId : %d\n", book.bookId);
}

// 指向结构的指针
void printBookByPoint(struct Books *book)
{   
    printf("book2 title : %s\n", book->title);
    printf("book2 author : %s\n", book->author);
    printf("book2 subject : %s\n", book->subject);
    printf("book2 bookId : %d\n", book->bookId);
}