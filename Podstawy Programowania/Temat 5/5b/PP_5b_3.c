# include <stdio.h>

int argCalc(int *a, int *b, int *summ, int *rozn, int *mult);

int main(){
  int a,b,summ,rozn, mult;
  printf("Input argument a\n");
  scanf("%d", &a);
  printf("Input argument b\n");
  scanf("%d", &b);
  argCalc(&a, &b, &summ, &rozn, &mult);
  printf("%d %d %d", summ,rozn,mult);
  return 0;
}

int argCalc(int *a, int *b, int *summ, int *rozn, int *mult){
  *summ = *a + *b;
  *rozn = *a - *b;
  *mult = *a * *b;
}
