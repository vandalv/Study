#include <stdio.h>
#include <conio.h>
int main()
 { int i1=5,i2=10,i3=15,i4=-1,i5=3,buf;
 FILE *fp;
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
 fseek(fp,0,SEEK_SET);
 fread(&buf,sizeof(int),1,fp);
 printf("\n Element nr 1 = %d",buf);
 fread(&buf,sizeof(int),1,fp);
 printf("\n Element nr 2 = %d",buf);
 fread(&buf,sizeof(int),1,fp);
 printf("\n Element nr 3 = %d",buf);
 fread(&buf,sizeof(int),1,fp);
 printf("\n Element nr 4 = %d",buf);
 fread(&buf,sizeof(int),1,fp);
 printf("\n Element nr 5 = %d\n",buf);
 fclose(fp);
 return 1;}
