#include <stdio.h>

int main(){
    char c='1';

    if ((c>='a' && c<='z')||(c>='A' && c<='Z')){
        printf("%c is character\n",c );
    }
    else{
        printf("%c is not character\n",c );
    }
    return 0;
}
