#include <stdio.h>
#include <conio.h>
int main()
 { int i1=5,i2=10,i3=15,i4=-1,i5=3,buf1,buf2, buf,n,k;
 FILE *fp;
 printf("Print First element to change:");
 scanf("%d", &n);
 printf("Print Second element to change:");
 scanf("%d", &k);
 fp=fopen("Plik1.dat","w+b");
 if (fp==NULL)
 {
 printf("\n Can`t create file");
 return 1;
 }
 else{
 printf("\n File has been sucessfully created");
 }
 fwrite(&i1,sizeof(int),1,fp);
 fwrite(&i2,sizeof(int),1,fp);
 fwrite(&i3,sizeof(int),1,fp);
 fwrite(&i4,sizeof(int),1,fp);
 fwrite(&i5,sizeof(int),1,fp);
 fclose(fp);
 fp=fopen("Plik1.dat","r+b");
 fseek (fp,n*sizeof(int),SEEK_SET);
 fread(&buf1,sizeof(int), 1,fp);
 fseek (fp,k*sizeof(int),SEEK_SET);
 fread(&buf2,sizeof(int), 1,fp);
 fseek (fp,n*sizeof(int),SEEK_SET);
 fwrite(&buf2,sizeof(int), 1,fp);
 fseek (fp,k*sizeof(int),SEEK_SET);
 fwrite(&buf1,sizeof(int), 1,fp);
 fseek(fp,0,0);
 for (int i=0;i< 5;i++){
 fread(&buf,sizeof(int),1,fp);
 printf("\n Element pliku nr %d =%d",i,buf);
 }
 fclose(fp);
 return 1;
 }
