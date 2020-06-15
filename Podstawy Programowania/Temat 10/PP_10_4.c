#include <stdio.h>

int oblWartoscBitow (short int x, int n, int p)
{
 {
 return x>>(p+1-n)& ~( ~0<<n);
 }
}

int main()
 { short int x1=15;
 int w= oblWartoscBitow(x1,3,3);
 printf("Wartosc bloku=%d",w);
 printf("\n");
 getchar();
 return 0;
 }
