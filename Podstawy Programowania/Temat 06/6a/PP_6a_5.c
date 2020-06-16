#include <stdio.h>
#include <ctype.h>

int main(){
  char sml;
  char upp;
  scanf("%c", &sml);
  printf("%c\n", toupper(sml));
  getchar();
  scanf("%c", &upp);
  printf("%c", tolower(upp));
  return 0;
}
