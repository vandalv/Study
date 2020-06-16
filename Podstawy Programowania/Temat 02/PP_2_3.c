#include <stdio.h>

int main(){
int array[6];
int i=0,k=0,sUm=0,oDd=0,eVen=0;
for(i=0;i<6;i++){
do {
printf("array[%d]=",i);
k=scanf("%d",&array[i]);
if (k==0 && k<0) printf ("Wrong format!\n");
fflush (stdin);
} while (k==0 && k<0);
fflush(stdin);
}
for(i=0;i<6;i++){
sUm+=array[i];
}
printf("Summ of All Elements Is - %d\n",sUm);
for(i=0;i<6;i++){
if(array[i]%2==0){
	oDd+=array[i];
}
else{
	eVen+=array[i];
}
}
printf("Summ of Odd Elements Is - %d\n",oDd);
printf("Summ of even Elements Is - %d\n",eVen);
    return 0;
}
