# include <stdio.h>

int argCalc(int *a, int *b, int *summ, int *rozn);

int main(){
  int a,b,summ,rozn,mult;
  printf("Input argument a\n");
  scanf("%d", &a);
  printf("Input argument b\n");
  scanf("%d", &b);
  mult = argCalc(&a, &b, &summ, &rozn);
  printf("%d %d", summ,rozn);
  printf("%d", mult);
  return 0;
}

int argCalc(int *a, int *b, int *summ, int *rozn){
  int mult;
  *summ = *a + *b;
  *rozn = *a - *b;
  mult = *a * *b;
  return(mult);
}
