#include <stdio.h>
#include <conio.h>
int main()
 { int i1=5,i2=10,i3=15,buf;
 FILE *fp;
 fp=fopen("Plik1.dat","w+b");
 if (fp==NULL)
 {
 printf("\n Plik nie daje sie utworzyc");
 return 1;
 }
 fwrite(&i1,sizeof(int),1,fp);
 fwrite(&i2,sizeof(int),1,fp);
 fwrite(&i3,sizeof(int),1,fp);
 fseek(fp,0,SEEK_SET);
 fread(&buf,sizeof(int),1,fp);
 printf("\n Element nr 1 =%d",buf);
 fread(&buf,sizeof(int),1,fp);
 printf("\n Element nr 2 =%d",buf);
 fread(&buf,sizeof(int),1,fp);
 printf("\n Element nr 3 =%d\n",buf);
 fclose(fp);
 return 1;} 
