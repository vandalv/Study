#include <stdio.h>
#include <math.h>
#include <float.h>
#include <complex.h>
#include <stdlib.h>

int main()
{
    int k=0;
    const double PI = 3.14159;
    double x;
    double numerator;
    double denumerator;
    double result;
    do{
        printf("input x:");
        k = scanf("%lf",&x);
        if(x<0 || fmod(x,90) == 0 || x > DBL_MAX || k == 0){
            printf("Wrong Format!Try again!\n");
            fflush(stdin);
        }
    } while(x<0 || fmod(x,90) == 0 || x > DBL_MAX || k == 0);
numerator = log2(x-1)+cbrt(ctan(x))+ceil(pow(3,x))+exp(pow(3,x));
denumerator = cosh(x)+tan(x)+log(abs(cos(x)))+pow(PI,x);
result = numerator / denumerator;
printf("The Result Is - %lf", result);
}
