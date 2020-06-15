#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DaneTechniczne
{
  int pojemnoscSkokowa;
  int moc;
  int momentObrotowy;
  char paliwo[10];
};

struct Silnik
{
  char nazwa[25];
  char producent[25];
  double cenaNetto;
  struct DaneTechniczne daneSilnika;
  int VAT;
  double cenaBrutto;
};

FILE* utworzNowyPlik (char *nazwa, char *tryb)
{
 FILE *fp;
 fp=fopen("file2.dat","w+b");
 if (fp==NULL)
 {
 printf("\n Plik %s nie zostal utworzony", nazwa);
 getchar();
 exit(1);
 }
 else printf("\n Nowy plik %s zostal utworzony", nazwa);
 return fp;
}

void drukujStrukt(struct Silnik st)
{
 printf("\n nazwa:%s", st.nazwa);
 printf("\n Identyfikator:%s", st.producent);
 printf("\n Typ: %lf", st.cenaNetto);
}



int main(){
    struct Silnik Silniki[4] =
 {{"silnik","Sharp", 1000, 10, 3, 20,"Diesel"},
 {"silnik","Phillips", 4000, 15, 7, 30,"Benzin"},
 {"silnik","Honda", 2000, 17, 4, 150,"Diesel"},
 {"silnik","Toshiba", 1500, 16, 8, 80,"Benzin"}};
 FILE *fp1;
 int i;
 struct Silnik bufs;
 fp1=utworzNowyPlik("Silniki1.dat","w+b");
 printf("\n Zapis tablicy struktur do pliku");
 for(i=0;i<4;i++)
 fwrite(&Silniki[i],sizeof(struct Silnik),1,fp1);
 printf("\n Zapis ukonczony");
 getchar();
 i=1;
 fseek(fp1,0,SEEK_SET);
while (fread(&bufs,sizeof(struct Silnik),1,fp1))
 {
 printf("\n Dane silnika %d",i++);
 drukujStrukt(bufs);
 getchar();
 printf("\n");
 }
 getchar();
 system("cls");
}
