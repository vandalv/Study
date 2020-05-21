#include <stdio.h>

int main(){
   double disp[3][3], determinant;
   int i, j, k=0;
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
   for(i=0;i<3;i++){
       determinant = determinant + (disp[0][i]*(disp[1][(i+1)%3]*disp[2][(i+2)%3] - disp[1][(i+2)%3]*disp[2][(i+1)%3]));
   }
   printf("\nThe Determinant Of The 2D Array Is: %.2lf\n",determinant);
   return 0;
}
