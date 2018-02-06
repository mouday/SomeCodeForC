#include <stdio.h>
#include <string.h>
struct Student{
    char name[50];
    int age;
    float marks;
}s;

int main(){
	strcpy(s.name,"Tom");
//    s.name="Tom";
    s.age=25;
    s.marks=100.00;
    printf("name : %s\n",s.name);
    printf("age : %d\n",s.age);
    printf("marks : %.2f\n",s.marks);
    return 0;
}
