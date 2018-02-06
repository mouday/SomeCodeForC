#include <stdio.h>
#include <stdlib.h> /*exit()*/
int main(){ 
    char s[10]="hello!";

    FILE *fp;
    fp=fopen("text.txt","w");
    if(fp==NULL){
        printf("error!");
        exit(1);
    }
    fprintf(fp, "%s", s);
    fclose(fp);
    printf("success!");
    return 0;
}
