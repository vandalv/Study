#include <stdio.h>

struct sPlace
{
  char street[20];
  int house;
  char post[8];
  char city[20];
};

struct sWorker
{
  char surname[20];
  char name[20];
  int years;
  char firm[20];
  struct sPlace contact;
};

int main(){
    struct sWorker personal[2];
    for(int i = 0; i<2; i++){
        printf("Surname:\n");
        scanf("%s", personal[i].surname);
        printf("Name:\n");
        scanf("%s", personal[i].name);
        printf("Years Of Work:\n");
        scanf("%d", &personal[i].years);
        printf("Firm:\n");
        scanf("%s", personal[i].firm);
        printf("Street:\n");
        scanf("%s", personal[i].contact.street);
        printf("House:\n");
        scanf("%d", &personal[i].contact.house);
        printf("Post:\n");
        scanf("%s", personal[i].contact.post);
        printf("City:\n");
        scanf("%s", personal[i].contact.city);
    }
    for(int i = 0; i<2; i++){
        printf("%d Worker surname %s\n", i+1, personal[i].surname);
        printf("%d Worker name %s\n", i+1, personal[i].name);
        printf("%d Worker years of work %d\n", i+1,personal[i].years);
        printf("%d Worker firm %s\n", i+1, personal[i].firm);
        printf("%d Worker street %s\n", i+1, personal[i].contact.street);
        printf("%d Worker house %d\n", i+1, personal[i].contact.house);
        printf("%d Worker post code %s\n", i+1, personal[i].contact.post);
        printf("%d Worker city %s\n", i+1, personal[i].contact.city);
    }

}
