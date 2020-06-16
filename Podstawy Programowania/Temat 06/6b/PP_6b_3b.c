#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 20

void firstLetterToUppers(char* p_surname);
void firstLetterToUppern(char* p_name);

int main(void){
  char space[] = " ";
  char surname[SIZE-1];
  char name[SIZE-1];
  char* p_surname;
  char* p_name;
  p_surname = surname;
  p_name = name;
  scanf("%s",surname);
  firstLetterToUppers(p_surname);
  scanf("%s",name);
  firstLetterToUppern(p_name);
  strcat(name, " ");
  strcat(name, surname);
  fputs(name, stdout);
}

void firstLetterToUppers(char* p_surname){
  *p_surname = toupper(*p_surname);
}

void firstLetterToUppern(char* p_name){
  *p_name = toupper(*p_name);
}
