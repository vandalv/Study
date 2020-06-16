#include <stdio.h>

int main(){
   double disp[3][3], temp;
   int i, j, k=0, c1, c2;
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
   printf("Input Number Of Columns To Swap\n");
   scanf("%d %d", &c1,&c2);
   for (i=0; i<3; ++i){
   temp = disp[i][c2-1];
   disp[i][c2-1] = disp[i][c1-1];
   disp[i][c1-1] = temp;
}
   printf("New 2D Array Elements With Swaped Rows %d And %d:\n", c1,c2);
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
