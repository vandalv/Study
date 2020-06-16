#include <stdio.h>

int reading(int disp[3][3]);
int printing(int disp[3][3]);

int main(){
  int disp[3][3];
  reading(disp);
  printing(disp);
}

int reading(int disp[3][3]){
  int i, j, k=0;
  for(i=0; i<3; i++) {
     for(j=0;j<3;j++) {
        do {
        printf("Enter value for disp[%d][%d]:", i, j);
        k=scanf("%d", &disp[i][j]);
        if (k==0) printf ("Wrong format!\n");
        fflush (stdin);
        } while (k==0);
     }
  }
}

int printing(int disp[3][3]){
    int i, j, k=0;
    for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
}
