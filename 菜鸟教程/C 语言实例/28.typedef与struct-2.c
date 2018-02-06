//typedef与struct
#include <stdio.h>
#include <string.h>  //使用strcpy();

//结构定义，Student是一个Tag标签，区分其他结构
struct Student
{
    char name[50];
    int  age;
    float score;
} student;//变量

int main(){
    // 使用赋值
    strcpy(student.name,"Tom");
    student.age=25;
    student.score=99.0;

    // 使用读取
    printf("student.name : %s\n",student.name);
    printf("student.age : %d\n",student.age);
    printf("student.score : %.2f\n",student.score);

    return 0;
}
