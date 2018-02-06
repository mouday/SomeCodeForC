//UseTestDLL.c 

#include <stdio.h>
#include "TestDll.c"
// extern int hello();
// extern int SumNumbers(int a, int b);

int main()
{
    hello();
    hello();
    int a=2,b=3;
    int c;
    c=SumNumbers(a, b);
    printf ("c= %d.\n",c);
}
