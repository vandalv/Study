#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 10

void lower(char* p_surname);

int main(){
  char surname[SIZE];
  char name[SIZE];
  char* p_surname = NULL;
  char* p_name = NULL;
  p_surname = surname;
  p_name = name;
  fgets(surname, SIZE-1, stdin);
  lower(p_surname);
  fputs(surname,stdout);
  fgets(name, SIZE-1, stdin);
  lower(p_name);
  fputs(name,stdout);
}

void lower(char* p_surname){
  while(*p_surname){
    *p_surname = tolower(*p_surname);
    *p_surname++;
  }
}
