# include <stdio.h>

int arrinput(int arr[], int n);
int arroutput(int arr[], int n);
int fsumm(int arr[], int n);
int fel(int arr[]);

int main(){
    int arr[100];
    int n, summ,ind;
    printf("Input number of array Elements:");
    scanf("%d", &n);
    arrinput(arr, n);
    arroutput(arr, n);
    summ = fsumm(arr,n);
    ind = fel(arr);
    printf("%d\n", summ);
    printf("%d", ind);
}

int arrinput(int arr[], int n){
    int i;
    printf("Enter elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int arroutput(int arr[], int n){
    int i = 0;
    for(i; i<n; i++){
        printf("Arr[%d] - %d\n", i, arr[i]);
    }
}

int fsumm(int arr[], int n){
    int i = 0;
    int summ = 0;
    for(i; i<n; i++){
        summ = summ + arr[i];
    }
    return(summ);
}

int fel(int arr[]){
    int i = 0;
    int n = 0;
    printf("Input first index element:");
    scanf("%d", &i);
    printf("Input last index element:");
    scanf("%d", &n);
    int summ = 0;
    for(i; i<=n; i++){
        summ = summ + arr[i];
    }
    return(summ);
}
