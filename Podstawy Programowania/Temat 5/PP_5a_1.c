#include <stdio.h>

int main(void){
  int i = 10;
  int *p, *q;
  *p = &i;
  printf("%d", *p);
  return 0;
}
