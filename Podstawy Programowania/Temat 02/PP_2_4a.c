#include <stdio.h>

int main(){
double array[8];
double sV;
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
printf("Input Value Of Element For Search - ");
k=scanf("%lf",&sV);
if (k==0) printf ("Wrong format!\n");
fflush (stdin);
} while (k==0);
fflush(stdin);
for(i=0;i<8;i++){
	if(array[i]==sV){
		fOund=1;
		break;
	}
}
if(fOund == 1)
    {
        printf("\n%lf Was Found At Index %d", sV, i);
    }
    else
    {
        printf("\n%lf Was Not Found In The Array", sV);
    }
    return 0;
}
