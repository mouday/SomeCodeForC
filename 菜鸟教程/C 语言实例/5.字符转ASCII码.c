#include <stdio.h>

int main(){
    char c;

    printf("please input one character:");

    scanf("%c",&c);
    
    printf("%c ASCII %d\n",c,c);
    return 0;
}