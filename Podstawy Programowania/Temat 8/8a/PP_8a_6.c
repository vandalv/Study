#include <stdio.h>
#include <conio.h>

int main()
 {
 int i;
 double tabBuf[5], tab[5]={1,7,3,4,5};
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
 for (i=0;i<5;i++){
 printf("\n%lf", arr[i]);
 }
 getch();
 return 0;
}
