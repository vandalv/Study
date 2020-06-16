#include <stdio.h>
#include <conio.h>
int main()
 {int i;
 double max,min,buf;
 FILE *fp;
 fp=fopen("liczby3.dat","rb");
 fread(&buf,sizeof(double),1,fp);
 max=min=buf;
 while( fread(&buf,sizeof(double),1,fp))
 {
 if (buf>max) max=buf;
 if (buf<min) min=buf;
 }
printf("\n Wartosc maksymalna=%5.2f",max);
printf("\n Wartosc minimalna= %5.2f",min);
getch();
fclose(fp);
return 0;
}
