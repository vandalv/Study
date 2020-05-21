#include <stdio.h>

int MinMax(int a[], int len, int *min, int *max);
int main(void){
int a[] = {21, 4, 21, 987, 988, 32, 10, 123, 3, 4, 5};
int min, max;
int len = sizeof(a)/sizeof(int);
MinMax(a, len, &min, &max);
printf("Minimum Value Of the Array Is - %d. Maximum Value Of The Array Is - %d", min, max);
  return 0;
}

int MinMax(int a[], int len, int *min, int *max){
  *min = *max = a[0];
  int i = 1;
  for(i; i < len; i++){
    if(a[i] > *max){
      *max = a[i];
    }
    if(a[i] < *min){
      *min = a[i];
    }
  }
}
