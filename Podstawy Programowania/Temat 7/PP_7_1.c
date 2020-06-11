#include <stdio.h>
#include <string.h>

struct Student
{
char surname[20];
char name[20];
int learnYear;
char spec[20];
};

int main(){
struct Student student1, student2;
strcpy(student1.surname, "Ivanov");
strcpy(student1.name, "Ivan");
student1.learnYear = 3;
strcpy(student1.spec, "Informatics\n");
fputs("Input student2 Surname:", stdout);
fgets(student2.surname,19, stdin);
fputs("Input student2 name:", stdout);
fgets(student2.name,19, stdin);
fputs("Input year of study:", stdout);
scanf("%d", &student2.learnYear);
getchar();
fputs("Input student2 specialization:", stdout);
fgets(student2.spec,19, stdin);
printf("\n");
printf("Student1 Surname - \t%s\n", student1.surname);
printf("Student1 Name - \t%s\n", student1.name);
printf("Year Of Study - \t%d\n", student1.learnYear);
printf("Specialization - \t%s\n", student1.spec);
printf("Student2 Surname - \t%s", student2.surname);
printf("Student2 Name - \t%s", student2.name);
printf("Year Of Study - \t%d\n", student2.learnYear);
printf("Specialization - \t%s", student2.spec);
}
