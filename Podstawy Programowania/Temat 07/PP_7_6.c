#include <stdio.h>
#include <string.h>

struct student
{
char surname[10];
char name[10];
int year;
char faculty[10];
};

void sortStruct(struct student st[], int n){
  int i,p, zam;
  do{
    zam = 0;
    for(i=0; i<n-1;i++)
      if(st[i].year < st[i+1].year)
      {
        p = st[i].year;
        st[i].year = st[i+1].year;
        st[i+1].year = p;
        zam = 1;}
        }
      while(zam);
    }
void printStruct(struct student st){
  printf("\n Surname:%s", st.surname);
  printf("\n Name:%s", st.name);
  printf("\n Year:%d", st.year);
  printf("\n Faculty:%s", st.faculty);
  printf("\n");
}

int main(){
 int i, n=3;
 struct student student[3]=
 { {"Twain","Mark",2, "Inf"},
 {"Eastwood","Klint",3,"Eco"},
 {"Clinton","Bill",1,"Che"} };
 sortStruct(student,3);
 for(i=0;i<n;i++)
 printStruct(student[i]);
 getchar();
 return 0; }
