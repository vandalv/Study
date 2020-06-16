#include <stdio.h>
#include <math.h>

double getArray(double arr[],int n);
double modifyArray(double arr[],int n, int facto);
double arraySumm(double arr[], int n);
int factorial(int n);

int main(){
    int n, i, facto;
    double arr[100];
    double k;
    printf("Input number of elements:");
    scanf("%d", &n);
    facto = factorial(n);
    getArray(arr, n);
    modifyArray(arr, n, facto);
    k = arraySumm(arr, n);
    printf("\n\nArray outside function: \n");
    for (i = 0; i < n; i++)
    {
        printf("%lf\n", arr[i]);
    }
    printf("%lf", k);
    return 0;
}

double getArray(double arr[],int n){
    int i;
    printf("Enter elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &arr[i]);
    }
}

int factorial(int n){
    int facto = 1;
    int i = 1;
    for (i; i <= n; i++)
    {
        facto = facto * i;
    }
    return(facto);
}

double modifyArray(double arr[],int n, int facto){
    int i;
    for (i = 0; i < n; i++)
    {
        arr[i] = (pow(arr[i], 0.2))/facto;
    }
}

double arraySumm(double array[], int n){
    int i;
    double summ = 0;
    for (i = 0; i < n; i++)
    {
        summ += array[i];
    }
}
