#include <stdio.h>

int main(){
double array[8];
double sUm=0;
int ind1, ind2;
int i=0,k=0,
fOund=0;
for(i=0;i<8;i++){
  do { printf("array[%d]=",i);
  k=scanf("%lf",&array[i]);
  if (k==0) printf ("Wrong format!\n");
  fflush (stdin); } while (k==0);
  fflush(stdin);
}
  do { printf("Input Index 1 - "); k=scanf("%d",&ind1);
printf("Input Index 2 - ");
k=scanf("%d",&ind2);
if (k==0 || ind1<=0 || ind1<=0 || ind1>=7 || ind2>=7) printf ("Wrong format! Input Should Be Made As Integer. Indexes should be >=0 And <=7\n");
fflush (stdin);
} while (k==0 || ind1<=0 || ind1<=0 || ind1>=7 || ind2>=7);
 fflush(stdin);
 for(i=0;i<8;i++){
   if(i>=ind1 && i<=ind2){
      sUm+=array[i];
    }
  }
  printf("Summ Of Integers In The Range Of Selected Indexes - %lf",sUm);
   return 0;
 }
