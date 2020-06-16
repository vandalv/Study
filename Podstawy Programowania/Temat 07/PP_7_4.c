#include <stdio.h>

struct sStudent
{
  char surname[10];
  char name[10];
};

struct sStudent ginfo();
struct sStudent pinfo();

int main(){
  struct sStudent student;
  student = ginfo();
  pinfo();
}

struct sStudent ginfo()
{
  struct sStudent s1;

  printf("Enter surname: ");
  scanf ("%s", s1.surname);

  printf("Enter name: ");
  scanf ("%s", s1.name);

  return s1;
}

struct sStudent pinfo()
{
  struct sStudent s1;

  printf("Student surname is %s\n", s1.surname);
  printf("Student name is %s", s1.name);
}
