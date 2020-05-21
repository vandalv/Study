#include<stdio.h>
int main(){
   double disp[4][4], array[16],mAx,mIn;
   int i, j, k=0;
   for(i=0; i<4; i++) {
      for(j=0;j<4;j++) {
         do {
         printf("Enter value for disp[%d][%d]:", i, j);
         k=scanf("%lf", &disp[i][j]);
         if (k==0) printf ("Wrong format!\n");
         fflush (stdin);
         } while (k==0);
      }
   }
   printf("2D Array Elements:\n");
   for(i=0; i<4; i++) {
      for(j=0;j<4;j++) {
         printf("%.2lf ", disp[i][j]);
         if(j==3){
            printf("\n");
         }
      }
   }
   for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			array[k]=disp[i][j];
			k++;
		}
		printf("\n");
	}
	printf("One Dimensional Array Is: \n");
	for(i=0;i<16;i++)
		printf("%.2lf ",array[i+1]);
	mIn=array[0];
    mAx=array[0];
    for(i=0;i<16;i++){
    if(array[i]<mIn){
    mIn=array[i];
    }
    if(array[i]>mAx){
    mAx=array[i];
    }
    }
    printf("\nMaximum Element In The Array Is - %.2lf",mAx);
    printf("\nMinimum Element In The Array Is - %.2lf\n",mIn);
    return 0;
}
