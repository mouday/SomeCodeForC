#include <stdio.h>
#include <stdio.h>

struct{
    // age 变量将只使用 3 位来存储这个值，如果您试图使用超过 3 位，则无法完成
    unsigned int age:3;
}Age;

int main(){
    Age.age=4;
    printf("sizeof Age = %d\n", sizeof(Age));
    printf("Age.age = %d\n", Age.age);

    Age.age=7;
    printf("Age.age = %d\n", Age.age);

    Age.age=8;
    printf("Age.age = %d\n", Age.age);
}