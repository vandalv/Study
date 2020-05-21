#include <stdio.h>
#include <math.h>

int main()
{
    int k=0, z=0, i=1, t;
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
    if(x%2 == 0){
        t = 1;
    }
    else{
        t = -1;
    }
    for(i; i<=n; i++){
        factorial *= 2*i+1;
        maclaurien += t * (pow(x,2*i+1))/factorial;
    }
printf("Summ Of Maclaurien Series For sin(x) = %lf For %d Elements With X = %d",maclaurien,n,x);
}
