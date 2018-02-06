#include <stdio.h>
#include <string.h>

int gerStringLen(char *s){
    int i,len=0;

    for(i=0;s[i]!='\0';i++){
        len++;
    }
    return len;
}

int main(){
    char *s="helloworld";
    printf("len : %d\n",strlen(s));
    printf("len : %d\n",gerStringLen(s));
    return 0;
}

