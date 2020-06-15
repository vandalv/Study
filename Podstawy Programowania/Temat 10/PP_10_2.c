#include <stdio.h>

void fun(int arr[], int n)
{
int i,k=1;
 for(i=0;i<8;i++) {
 if ((n&k)!=0) arr[i]=1;
 else arr[i]=0;
 k=k*2;}

}

int main()
{
int i;
int arr[] = {0, 0, 0, 0, 0, 0, 0, 0};
int n;
printf("Input decimal to convert to binary:");
scanf("%d", &n);
fun(arr, n);
for (i=7;i>=0;i--) printf(" %d ",arr[i]);
getchar();
return 0;
}
