#include <stdio.h>

int main(){
   int a=3, b=10, c=5;
   if (a>b && a>c){
    printf("%d is max\n", a);
   }
   if (b>a && b>c){
    printf("%d is max\n", b);
   }
   if (c>a && c>b){
    printf("%d is max\n", c);
   }
    return 0;
}