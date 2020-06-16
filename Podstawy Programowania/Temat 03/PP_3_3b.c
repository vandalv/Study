#include <stdio.h>

int main(){
   double disp[3][3], temp;
   int i, j, k=0, r1, r2;
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         do {
         printf("Enter value for disp[%d][%d]:", i, j);
         k=scanf("%lf", &disp[i][j]);
         if (k==0) printf ("Wrong format!\n");
         fflush (stdin);
         } while (k==0);
      }
   }
   printf("2D Array Elements:\n");
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("%.2lf ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   printf("Input Number Of Rows To Swap\n");
   scanf("%d %d", &r1,&r2);
   for (i=0; i<3; ++i){
   temp = disp[r2-1][i];
   disp[r2-1][i] = disp[r1-1][i];
   disp[r1-1][i] = temp;
}
   printf("New 2D Array Elements With Swaped Rows %d And %d:\n", r1,r2);
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("%.2lf ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}
