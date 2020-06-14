#include <stdio.h>
#include <conio.h>

int main()
 {
 int i;
 double tabBuf[5], tab[5]={1,2,3,4,5}, summ;
 FILE *fp;
 fp=fopen("file2.dat","w+b");
 fwrite(tab,sizeof(double),5,fp);
 fclose(fp);
 fp=fopen("file2.dat","r+b");
 fread(tabBuf,sizeof(double),5,fp);
 for (i=0;i<5;i++){
 printf("\n Element pliku nr %d =%5.2f",i+1,tabBuf[i]);
 summ = summ + tabBuf[i];
 }
 printf("\n Summ of elements %.2lf",summ);
 fclose(fp);
 getch();
 return 0;
}
