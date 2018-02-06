#include <stdio.h>
#include <math.h>
//ax2+bx+c=0
int main(){
    int a=1,b=2,c=1;
    double x1,x2;

    if (a>0){
        double delta=b*b-4*a*c;
        if (delta>0){
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf("x1 = %.2f x2 = %.2f\n", x1,x2);
        }
        else if(delta==0){
            x1=(-b)/(2*a);
            printf("x1 = x2 = %.2f\n", x1);

        }
        else{
            printf("x1 = x2 = NULL");
        }
    }
    else{
        printf("a<0");
    }
    return 0;
}