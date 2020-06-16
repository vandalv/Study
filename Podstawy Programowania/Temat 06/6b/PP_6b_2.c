#include <stdio.h>
#include <string.h>

int main(){
  char s4[5];
  char s5[5] = "1234";
  char s6[5];
  char s7[8] = "text";
  strcpy(s4, s5);
  printf(s4);
  puts("\n");
  strcpy(s6,s7+1);
  printf(s6);
  puts("\n");
  printf(s7);
  return 0;
}
