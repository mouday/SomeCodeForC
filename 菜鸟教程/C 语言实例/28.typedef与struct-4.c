//typedef与struct
#include <stdio.h>
#include <string.h>  //使用strcpy();

//结构定义，Student是一个Tag标签，区分其他结构
typedef struct Student
{
    char name[50];
    int  age;
    float score;
} Student;//别名

int main(){
    //申明
    Student student;
    Student *pStudent=&student;
    // 使用赋值
    strcpy(pStudent->name,"Tom");
    pStudent->age=25;
    pStudent->score=99.0;

    // 使用读取
    printf("student.name : %s\n",pStudent->name);
    printf("student.age : %d\n",pStudent->age);
    printf("student.score : %.2f\n",pStudent->score);

    return 0;
}
