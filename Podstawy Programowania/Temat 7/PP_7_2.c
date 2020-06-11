#include <stdio.h>
#include <string.h>

struct sStudent
{
  char surname[20];
  char name[20];
  int lYear;
  char spec[20];
};

int main(){

struct sStudent student[10];
int number_of_students;

printf("Input number of students:");
scanf("%d", &number_of_students);

for(int i = 0; i<number_of_students; i++)
{
  getchar();
  printf("Input %d students surname:\n", i+1);
  scanf("%s", student[i].surname);
  printf("Input %d students name:\n", i+1);
  scanf("%s", student[i].name);
  printf("Input %d students Year Of Study:\n", i+1);
  scanf("%d", &student[i].lYear);
  printf("Input %d students specialisation:\n", i+1);
  scanf("%s\n", student[i].spec);
}
  for(int i = 0; i<number_of_students; i++)
{
    printf("%d students surname: %s\n", i+1, student[i].surname);
    printf("%d students name: %s\n", i+1, student[i].name);
    printf("%d students Year of Study: %d\n", i+1, student[i].lYear);
    printf("%d students Specialization: %s\n", i+1, student[i].spec);

}

}
