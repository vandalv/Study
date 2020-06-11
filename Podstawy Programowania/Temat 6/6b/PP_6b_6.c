#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    double num2;
    char a[10];
    char b[10];
    char c[10];
    int b1 = 10, b2 = 2, b3 = 16;
    fgets(a, 9, stdin);
    num1 = atoi(a);
    printf("%d\n", num1);
    fgets(b, 9, stdin);
    num2 = atof(b);
    printf("%lf\n", num2);
}
