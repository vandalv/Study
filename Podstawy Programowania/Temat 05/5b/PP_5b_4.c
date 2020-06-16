# include <stdio.h>
# include <math.h>

int func(int arr[], int* p, int* q);

int main(){
  int i = 0;
  int p,q;
  int* ptr;
  int arr[2];
  ptr = arr;
  for (i = 0; i < 2; i++)
    {
        scanf("%d", &arr[i]);
    }
  func(arr, &p, &q);
  printf("%d %d", p, q);
}

int func(int arr[], int* p, int* q){
    *p = arr[0] / arr[1];
    *q = arr[0] % arr[1];
}
