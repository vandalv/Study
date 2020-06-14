#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
 {
 int i;
 double tabBuf[10], tab[10],buf;
 FILE *fp, *fp2;
 for(i = 0;i<10;i++){
     tab[i] = rand()%20;
 }
 fp=fopen("kopia.dat","w+b");
 fclose(fp);
 fp=fopen("liczby4.dat","w+b");
 fclose(fp);
 fp=fopen("liczby3.dat","w+b");
 fwrite(tab,sizeof(double),10,fp);
 fclose(fp);
 fp=fopen("liczby3.dat","r+b");
 fread(tabBuf,sizeof(double),10,fp);
 for (i=0;i<10;i++){
 printf("\n Element pliku liczby3 nr %d = %lf",i+1,tabBuf[i]);
 }
 fclose(fp);
 fp=fopen("liczby3.dat","rb");
 fp2=fopen("kopia.dat","w+b");
 while(fread(&buf,sizeof(double),1,fp)){
 fwrite(&buf,sizeof(double),1,fp2);}
 fseek(fp2,0,SEEK_SET);
 i = 1;
 while(fread(&buf,sizeof(double),1,fp2)){
 printf("\n Element pliku kopia nr %d =%lf",i++,buf);}
 fclose(fp);
 fclose(fp2);
 fp=fopen("kopia.dat","rb");
 fp2=fopen("liczby4.dat","w+b");
 while(fread(&buf,sizeof(double),1,fp)){
 if((int)buf%2 == 0){
 fwrite(&buf,sizeof(double),1,fp2);}
 }
 fseek(fp2,0,SEEK_SET);
 i = 1;
 while(fread(&buf,sizeof(double),1,fp2)){
 printf("\n Element pliku liczby4 nr %d =%lf",i++,buf);}
 fclose(fp);
 fclose(fp2);
 getch();
 return 0;
}
