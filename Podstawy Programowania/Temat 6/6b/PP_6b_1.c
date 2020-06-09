#include <stdio.h>
#include <string.h>

int main(){
  char s1[6];
  char s2[8];
  char s3[10];
  scanf("%s", s1);
  printf("%s\n", s1);
  getchar();
  fflush(stdin);
  gets(s2);
  puts(s2);
  fflush(stdin);
  fgets(s3,9,stdin);
  fputs(s3,stdout);
  return 0;
}
