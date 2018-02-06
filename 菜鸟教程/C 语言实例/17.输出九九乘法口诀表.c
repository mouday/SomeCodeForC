#include <stdio.h>

int main(){
    int i,j;

    //外层循环变量,控制行  
    for (i=1;i<10;i++){
        //内层循环变量,控制列   
        for(j=1;j<=i;j++){
            printf("%d * %d = %d\t",j, i, i*j);
        }
        printf("\n");//每行输出完后换行   
    }

    return 0;
}