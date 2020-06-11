#include <stdio.h>
#include <string.h>

int main()
{
   char str[2][10];
   int i = 0;

   for(i = 0; i < 2; i++)
   scanf("%s", str[i]);
   if(strcmp(str[0],str[1]) < 0){
       printf("%s\n", str[0]);
       printf("%s\n", str[1]);
   }
   else if(strcmp(str[0],str[1]) == 0){
       printf("%s\n", str[0]);
       printf("%s\n", str[1]);
   }
   else{
       printf("%s\n", str[1]);
       printf("%s\n", str[0]);
   }

}
