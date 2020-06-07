# include <stdio.h>

int main(){
int num;
int *numPtr;
int num2;
num = 13;
numPtr = &num;
num2 = *numPtr;
printf("%d - num, %d - numPtr, %d - adress of num, %d - num2", num, numPtr, &num, num2);

  return 0;
}
