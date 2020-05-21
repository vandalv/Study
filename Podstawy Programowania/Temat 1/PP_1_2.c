#include <stdio.h>
#include <math.h>

int main()
{
    int k=0, z=0, i=1;
    int factorial = 1;
    int n, x;
    double maclaurien = 0.0;

    do{
        printf("input number of elements(n):");
        k = scanf("%d",&n);
        printf("input (x):");
        z = scanf("%d",&x);
        if(n<1 || k == 0){
            printf("Wrong Format!Try again!\n");
            fflush(stdin);
        }
    } while(n<1 || k == 0);
    for(i; i<=n; i++){
        factorial *= i;
        maclaurien += pow(x,i)/factorial;
    }
printf("Summ Of Maclaurien Series For e^x = %lf For %d Elements With X = %d",maclaurien,n,x);
}
