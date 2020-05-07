
#include <stdio.h>
#include <stdlib.h>

int nAdd(int, int);
int nSubtract(int, int);
int nMultiply(int, int);
int nDivide(int, int);
int nResidue(int, int);
int main()
{
   int a,b, summ,subtract,multiply,divide,residue;
   scanf("%d %d", &a,&b);
   summ = nAdd(a,b);
   subtract = nSubtract(a,b);
   multiply = nMultiply(a,b);
   divide = nDivide(a,b);
   residue = nResidue(a,b);
   printf("The Sum Of - %d And %d Is - %d\n", a,b, summ);
   printf("The Subtraction Result Of - %d And %d Is - %d\n", a,b, subtract);
   printf("The Multiplication Result Of - %d And %d Is - %d\n", a,b, multiply);
   printf("The Division Result Of - %d And %d Is - %d\n", a,b, divide);
   printf("The Residue Of - %d And %d Is - %d\n", a,b, residue);
   return 0;
}

int nAdd(int x, int y){
    int summ;
    summ = x + y;
    return summ;
}

int nSubtract(int x, int y){
    int subtract;
    subtract = x - y;
    return subtract;
}

int nMultiply(int x, int y){
    int multiply;
    multiply = x * y;
    return multiply;
}

int nDivide(int x, int y){
    int divide;
    divide = x / y;
    return divide;
}

int nResidue(int x, int y){
    int residue;
    residue = x % y;
    return residue;
}
