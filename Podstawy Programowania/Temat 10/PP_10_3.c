#include <stdio.h>

void fun(int arr[], int maska1)
{
int i,k=1;
 for(i=0;i<=16;i++) {
 if ((maska1&k)!=0) arr[i]=1;
 else arr[i]=0;
 k=k*2;}

}

int main()
{
int i;
int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int maska1;
maska1=0;
maska1=~maska1;
maska1=maska1<<2;
fun(arr, maska1);
for (i=15;i>=0;i--) printf(" %d ",arr[i]);
printf("\n");
maska1=~maska1;
fun(arr, maska1);
for (i=15;i>=0;i--) printf(" %d ",arr[i]);
printf("\n");
maska1=maska1<<15;
maska1=~maska1;
fun(arr, maska1);
for (i=16;i>0;i--) printf(" %d ",arr[i]);
printf("\n");
maska1=~maska1;
fun(arr, maska1);
for (i=16;i>0;i--) printf(" %d ",arr[i]);
printf("\n");
maska1=0;
maska1=~maska1;
maska1=maska1<<1;
maska1=~maska1;
maska1=maska1<<10;
fun(arr, maska1);
for (i=16;i>0;i--) printf(" %d ",arr[i]);
printf("\n");
maska1=0;
maska1=~maska1;
maska1=maska1<<1;
maska1=~maska1;
maska1=maska1<<10;
maska1=~maska1;
fun(arr, maska1);
for (i=16;i>0;i--) printf(" %d ",arr[i]);
printf("\n");
getchar();
return 0;
}
