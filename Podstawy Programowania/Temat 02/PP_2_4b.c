#include <stdio.h>

int main(){
double array[8];
double mIn,mAx,sUm=0;
int i=0,k=0,fOund=0;
for(i=0;i<8;i++){
do {
printf("array[%d]=",i);
k=scanf("%lf",&array[i]);
if (k==0) printf ("Wrong format!\n");
fflush (stdin);
} while (k==0);
fflush(stdin);
}
do {
printf("Input Minimum - ");
k=scanf("%lf",&mIn);
printf("Input Maximum - ");
k=scanf("%lf",&mAx);
if (k==0 || mIn>mAx) printf ("Wrong format! Input Should Be Made As Integer. Min Could be Not > Max!\n");
fflush (stdin);
} while (k==0 || mIn>mAx);
fflush(stdin);
for(i=0;i<8;i++){
	if(array[i]>=mIn && array[i]<=mAx){
		sUm+=array[i];
	}
}
printf("Summ Of Integers In Selected Range Is - %lf",sUm);
    return 0;
}
