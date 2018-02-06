#include <stdio.h>

int main(){
    int i;
    // ASCII 定义了 128 个字符
    printf("ASCII | Character\n");
    for(i=0;i<128;i++){
        printf("%d | %c\n",i,i);
    }
    return 0;
}
