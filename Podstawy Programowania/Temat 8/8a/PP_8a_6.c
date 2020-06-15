#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
 {
 int i,j;
 double tabBuf[5], tab[5]={1,7,3,4,5}, num, finarr[5];
 double* arr;
 arr = (double*) malloc(5 * sizeof(double));
 FILE *fp;
 fp=fopen("file2.dat","w+b");
 fwrite(tab,sizeof(double),5,fp);
 fclose(fp);
 fp=fopen("file2.dat","r+b");
 fread(tabBuf,sizeof(double),5,fp);
 for (i=0;i<5;i++){
 printf("\n Element pliku nr %d =%5.2f",i+1,tabBuf[i]);
 }
 fclose(fp);
 fp=fopen("file2.dat","r+b");
 fread(fp,sizeof(double),5,fp);
 for (i=0;i<5;i++){
 arr[i] = tabBuf[i];
 }
 fclose(fp);
 printf("\n");
 for (i=0;i<5;i++){
 printf("\n%lf", arr[i]);
 }
 for(i = 0, j = 4; j > 0, i < 5; i++, j--){
     finarr[j] = arr[i];
 }
 fp=fopen("file5.dat","w+b");
 fwrite(finarr,sizeof(double),5,fp);
 fclose(fp);
 fp=fopen("file5.dat","r+b");
 fread(tabBuf,sizeof(double),5,fp);
 for (i=0;i<=5;i++){
 printf("\n Element file5.dat nr %d =%5.2f",i+1,tabBuf[i]);
 }
 fclose(fp);
 getch();
 return 0;
}
