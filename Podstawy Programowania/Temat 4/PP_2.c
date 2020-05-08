#include <stdio.h>

int factorial(int);

int main()
{
  int n,k,result;
  printf("Please, Enter N:");
  scanf("%d", &n);
  printf("Please, Enter K:");
  scanf("%d", &k);
  result = factorial(n) / (factorial(k) * factorial(n - k));
  printf("%d", result);
  return 0;
}

int factorial(int x)
{
  int result = 1;
  int i=1;
  for(i; i<=x;i++){
    result *= i;
  }
  return result;
}
