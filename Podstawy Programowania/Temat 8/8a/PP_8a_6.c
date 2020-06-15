#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
 {
 int i,j,zam;
 double tabBuf[5], tab[5]={1,7,3,4,5}, num, finarr[5], p1,p2, buf;
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
 fp=fopen("file5.dat","w+b");
 for(i=0;i<=5;i++)
 fwrite(&tab[i],sizeof(double),1,fp);
 do { zam=0;
 for( i=0;i<4;i++) {
 fseek(fp,i*sizeof(double),SEEK_SET);
 fread(&p1,sizeof(double),1,fp);
 fread(&p2,sizeof(double),1,fp);
 if (p1>p2)
 {
 fseek(fp,i*sizeof(double),SEEK_SET);
 fwrite(&p2,sizeof(double),1,fp);
 fwrite(&p1,sizeof(double),1,fp);
 zam=1;
 }
 }
} while(zam==1);
fseek(fp,0,SEEK_SET);
i=0;
printf("\n Sorted File");
while(fread(&buf,sizeof(double),1,fp))
printf("\n Element nr %d=%.2lf",i++,buf);
fclose(fp);
 getch();
 return 0;
}
