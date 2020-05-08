#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
   double a,b, summ,subtract,multiply,divide,residue;
     char c;
     int k = 1;
     do{
       printf("Please, Enter Operation You Want To Perform \"+\", \"-\", \"*\", \"/\", \"%%\":\n");
       scanf("%c", &c);
       getchar();
       system("CLS");
     } while((c != '+') && (c != '-') && (c != '*') && (c != '/') && (c != '%'));

   return 0;
}
