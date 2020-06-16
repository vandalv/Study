#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
  int ch;
  while ((printf("\n"), ch=getchar())!=EOF){
    if(isdigit(ch)||isalpha(ch))
    printf("\n%c",toupper(ch));}
    system("PAUSE");
    return 0;
}
