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
 printf("\n Nazwa:%s", st.nazwa);
 printf("\n Producent:%s", st.producent);
 printf("\n Cena Netto: %lf", st.cenaNetto);
 printf("\n Pojemnosc Skokowa: %d", st.daneSilnika.pojemnoscSkokowa);
 printf("\n Moc: %d", st.daneSilnika.pojemnoscSkokowa);
 printf("\n Moment Obrotowy: %d", st.daneSilnika.momentObrotowy);
 printf("\n Paliwo: %s", st.daneSilnika.paliwo);
 printf("\n VAT: %d", st.VAT);
 printf("\n Cena Brutto: %lf", st.cenaBrutto);

}

struct Silnik wczytajStrukt(void)
{
 struct Silnik st;
 fflush(stdin);
 printf("\nNazwa:");
 scanf("%s",st.nazwa);
 printf("\nProducent:");
 scanf("%s",st.producent);
 fflush(stdin);
 printf("\nCena Netto:");
 scanf("%lf",&st.cenaNetto);
 fflush(stdin);
 printf("\nPojemnosc Skokowa:");
 scanf("%d",&st.daneSilnika.pojemnoscSkokowa);
 fflush(stdin);
 printf("\nMoment Obrotowy:");
 scanf("%d",&st.daneSilnika.momentObrotowy);
 printf("\nPaliwo:");
 scanf("%s",st.daneSilnika.paliwo);
 printf("\nVAT:");
 scanf("%d",&st.VAT);
 printf("\nCena Brutto:");
 scanf("%lf",&st.cenaBrutto);
 return st;
};



int main(){
    struct Silnik Silniki[5] =
 {{"silnik","Sharp", 1000, 10, 3, 20,"Diesel", 8, 1200},
 {"silnik","Phillips", 4000, 15, 7, 30,"Benzin", 10, 4300},
 {"silnik","Honda", 2000, 17, 4, 150,"Diesel", 8, 2200},
 {"silnik","Toshiba", 1500, 16, 8, 80,"Benzin", 10, 1800}};
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
 printf("\n Wczytywanie struktury i zapis do pliku");
 fflush(stdin);
 bufs=wczytajStrukt();
 fseek(fp1,0,SEEK_END);
 fwrite(&bufs,sizeof(struct Silnik),1,fp1);
 printf("\n Wydruk pliku po dopisaniu struktury");
 fseek(fp1, 0, SEEK_SET);
 i=1;
 while (fread(&bufs,sizeof(struct Silnik),1,fp1))
 { printf("\n Dane silnika %d",i++);
 drukujStrukt(bufs);
 getchar();
 printf("\n");
}
printf("\n Wyszukiwanie struktury o zadanej wartosci pola Pojemnosc Skokowa");
 printf("\n Przykladowym zadanym polem będzie pole, w ktorym zapisana Pojemnosc Skokowa - 15");
 fseek(fp1, 0, SEEK_SET);
 i=1;
 printf("\n Wynik wyszukiwania Pojemnosci Skokowej - 15");
 fseek(fp1, 0, SEEK_SET);
i=1;
 while (fread(&bufs,sizeof(struct Silnik),1,fp1))
 {
 if (bufs.daneSilnika.pojemnoscSkokowa == 15)
 printf("\n Pojemnosc Skokowa znaleziona na pozycji %d",i);
 i++;
 }
 printf("\n \n \n");
}
