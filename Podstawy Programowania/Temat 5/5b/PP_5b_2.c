# include <stdio.h>

int argExchange(int *a, int *b);

int main(){
  int a,b;
  printf("Input argument a\n");
  scanf("%d", &a);
  printf("Input argument b\n");
  scanf("%d", &b);
  argExchange(&a, &b);
  printf("%d %d", a,b);
  return 0;
}

int argExchange(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
