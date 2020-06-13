#include <stdio.h>
#include <stdlib.h>

struct student {
    int marks;
    char surname[30];
};

int main() {
    struct student *ptr;
    int i, noOfRecords;
    printf("Enter the number of students: ");
    scanf("%d", &noOfRecords);

    ptr = (struct student *)malloc(noOfRecords * sizeof(struct student));
    for (i = 0; i < noOfRecords; ++i) {
        printf("Enter the surname of student and marks respectively:\n");
        scanf("%s %d", &(ptr + i)->surname, &(ptr + i)->marks);
    }

    printf("Student - Mark:\n");
    for (i = 0; i < noOfRecords; ++i)
        printf("%s\t%d\n", (ptr + i)->surname, (ptr + i)->marks);

    return 0;
}
