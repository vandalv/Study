#include<stdio.h>
int main(){
   double disp[3][3], csumm=0, rsumm=0, dsumm=0;
   int i, j, c, r, k=0;
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
   do {
   printf("Input number of column for summ:\n");
   k=scanf("%d", &c);
   if (k==0 || c<1 || c>3) printf ("Wrong format!\n");
   fflush (stdin);
   } while (k==0 || c<1 || c>3);
      for(i=0;i<3;i++) {
         csumm+=disp[i][c-1];
         }
   do {
   printf("Input number of row for summ:\n");
   scanf("%d", &r);
   if (k==0 || r<1 || r>3) printf ("Wrong format!\n");
   fflush (stdin);
   } while (k==0 || r<1 || r>3);
      for(j=0;j<3;j++) {
         rsumm+=disp[r-1][j];
         }
      for(i=0;i<3;i++) {
         dsumm+=disp[i][i];
         }
   printf("The Summ Of Elements In colomn %d Is %.2lf\n", c, csumm);
   printf("The Summ Of Elements In Row %d Is %.2lf\n", r, rsumm);
   printf("The Summ Of Elements At Main Diagonal Is %.2lf\n", dsumm);
   return 0;
}
