#include <stdio.h>

// 英语有26个字母，元音只包括 a、e、i、o、u 这五个字母，其余的都为辅音

int main(){
   int isLowercaseVowel, isUppercaseVowel;
   char c = 'T';

   isLowercaseVowel=(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c =='u');
   isUppercaseVowel=(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c =='U');

   printf("isLowercaseVowel = %d\n", isLowercaseVowel );
   printf("isUppercaseVowel = %d\n", isUppercaseVowel );
   
   //true=1,false=0
   if (isLowercaseVowel || isUppercaseVowel){
        printf("%c is vowel\n", c);
   }
   else{
        printf("%c is not vowel\n", c);
           }
    return 0;
}
