#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

double nAdd(double, double);
int main()
{
   double a,b, summ,subtract,multiply,divide,residue;
     char c;
     int k = 0;
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
       summ = nAdd(a,b);
       printf("The Sum Of - %lf And %d Is - %lf\n", a,b, summ);
     }
   return 0;
}

double nAdd(double a, double b){
    double summ;
    summ = a + b;
    return summ;
}
