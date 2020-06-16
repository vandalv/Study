#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main () {

   char str1[100];
   char str2;
   char str3[5];

  fgets(str1,100, stdin);
  str2 = getch();
  fgets(str3,4, stdin);
  if(strchr(str1, str2)){
      fputs("\nChar(Str2) Is In Str1", stdout);
  }
  else{
      fputs("\nChar(Str2) Is Not In Str1", stdout);
  }
  if(strstr(str1, str3)){
      fputs("\nStr(Str3) Is In Str1", stdout);
  }
  else{
      fputs("\nStr(Str3) Is Not In Str1", stdout);
  }
   return 0;
}
