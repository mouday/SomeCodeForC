#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char name[100];
    char *description;

    strcpy(name,"zara,ali");

    /* 动态分配内存 */
    description=malloc(20*sizeof(char));
    if(description==NULL){
        fprintf(stderr, "%s\n","Error - unable to allocate required memory\n");
    }
    else{
        strcpy(description,"student in class 10th");
    }

     /* 假设您想要存储更大的描述信息 */
    description=realloc(description,100*sizeof(char));
    if(description==NULL){
        fprintf(stderr, "%s\n","Error - unable to allocate required memory\n");
    }
    else{
        strcat(description,"zara ali a dps student in class 100th");
    }
    printf("name = %s\n",name);
    printf("description = %s\n",description);

     /* 使用 free() 函数释放内存 */
    free(description);
    return 0;
}

// 您可以尝试一下不重新分配额外的内存，strcat() 函数会生成一个错误，
// 因为存储 description 时可用的内存不足。
