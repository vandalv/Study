#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int N, i;
    int *ptr = arr;
    printf("Enter Size Of Array: ");
    scanf("%d", &N);
    printf("Enter Elements In Array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = arr;
    printf("Array Elements Are:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d\n", *ptr);

        ptr++;
    }
    return 0;
}
