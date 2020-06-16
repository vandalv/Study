#include <stdio.h>

int main(){
double array[5];
double tEmp;
int ind1, ind2;
int i=0,k=0;
for(i=0;i<5;i++){
do {
printf("array[%d]=",i);
k=scanf("%lf",&array[i]);
if (k==0) printf ("Wrong format!\n");
fflush (stdin);
} while (k==0);
fflush(stdin);
}
do {
printf("Input Index 1 - ");
k=scanf("%d",&ind1);
printf("Input Index 2 - ");
k=scanf("%d",&ind2);
if (k==0 || ind1<0 || ind1>4 || ind2<0 || ind2>4) printf ("Wrong format!Index Should Be An Integer From 0 to 4\n");
fflush (stdin);
} while (k==0 || ind1<0 || ind1>4 || ind2<0 || ind2>4);
fflush(stdin);
    printf("Input Array Is:\n");
for(i=0;i<5;i++){
	printf("array[%d]= %.2lf\n",i,array[i]);
	}
tEmp=array[ind1];
array[ind1]=array[ind2];
array[ind2]=tEmp;
    printf("New Array Is:\n");
for(i=0;i<5;i++){
	printf("array[%d]= %.2lf\n",i,array[i]);
	}
    return 0;
}
