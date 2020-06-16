#include <stdio.h>

int main(){
int array[6];
int i=0,k=0;
int tEmp,mIn;
for(i=0;i<6;i++){
do {
printf("array[%d]=",i);
k=scanf("%d",&array[i]);
if (k==0 || array[i]<0) printf ("Wrong format!\n");
fflush (stdin);
} while (k==0 || array[i]<0);
fflush(stdin);
}
for(i=0;i<6;i++){
printf("%d - Array Element Is - %d\n",i,array[i]);
}
mIn=array[0];
for(i=0;i<6;i++){
if(array[i]<mIn && array[i]%2==0){
	mIn=array[i];
}
}
printf("Minimum Odd Element In The Array Is - %.d\n",mIn);
    return 0;
}
