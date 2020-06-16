#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int get_code (void);
double nAdd(double, double);
double nSubtract(double, double);
double nMultiply(double, double);
double nDivide(double, double);
double nResidue(double, double);
int main()
{
   double a,b,summ,subtract,multiply,divide,residue;
     char c;
     int end;
     int k = 0;
do{
     do{
       printf("Please, Enter Operation You Want To Perform \"+\", \"-\", \"*\", \"/\", \"%%\":\n");
       scanf("%c", &c);
       getchar();
       system("CLS");
     } while((c != '+') && (c != '-') && (c != '*') && (c != '/') && (c != '%'));
     do{
       printf("The Operator You Choose Is - \"%c\". Please, Enter Two Operands To Continue\n", c);
       k = scanf("%lf %lf", &a, &b);
       fflush(stdin);
       system("CLS");
     } while(k == 0);
     if(c == '+'){
       summ = nAdd(a, b);
       printf("The Sum Of %lf And %lf Is %lf\n", a,b,summ);
     }
     else if(c == '-'){
       subtract = nSubtract(a,b);
       printf("The Result Of Substraction Of %lf And %lf Is %lf\n", a,b,subtract);
     }
     else if(c == '*'){
       multiply = nMultiply(a,b);
       printf("The Result Of Multiplication Of %lf And %lf Is %lf\n", a,b,multiply);
     }
     else if(c == '/'){
       divide = nDivide(a,b);
       printf("The Result Of Division Of %lf And %lf Is %lf\n", a,b,divide);
     }
     else if(c == '%'){
       residue = nResidue(a,b);
       printf("The Result Of Residue Of %lf And %lf Is %lf\n", a,b,residue);
     }
     printf("Do You Want To Make One More Operation?(ESC - To Exit!)");
     end = get_code();
     system("CLS");
}while(end != 27);
   return 0;
}

double nAdd(double a, double b){
	double summ;
    summ = a + b;
    return summ;
}

double nSubtract(double a, double b){
    double subtract;
    subtract = a - b;
    return subtract;
}

double nMultiply(double a, double b){
    double multiply;
    multiply = a * b;
    return multiply;
}

double nDivide(double a, double b){
    double divide;
    divide = a / b;
    return divide;
}

double nResidue(double a, double b){
    double residue;
    residue = fmod(a,b);
    return residue;
}

int get_code (void)
{
  int ch = getch();
  return ch;
}
