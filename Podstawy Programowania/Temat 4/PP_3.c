#include <stdio.h>
#include <math.h>

void fun(double arr[], unsigned int n)
{
double arr_y[9];
int i;
for (i=0; i<n; i++){
	arr_y[i] = cbrt(arr[i]);
	printf("%lf ", arr_y[i]);
}
}

int main()
{
double arr[] = {-2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2};
unsigned int n = sizeof(arr)/sizeof(arr[0]);
fun(arr, n);
return 0;
}
