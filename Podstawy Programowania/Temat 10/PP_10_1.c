#include <stdio.h>

int main(){
    short int lanbit1=12;
    short int lanbit2=-35;
    printf("\n Wartosc ~lanbit1=%d", ~lanbit1);
    printf("\n Wartosc ~lanbit2=%d", ~lanbit2);
    printf("\n Wartosc lanbit1&lanbit2=%d", lanbit1&lanbit2);
    printf("\n Wartosc ~lanbit1&lanbit2=%d", ~lanbit1&lanbit2);
    printf("\n Wartosc ~(lanbit1&lanbit2)=%d", ~(lanbit1&lanbit2));
    printf("\n Wartosc lanbit1|lanbit2=%d", lanbit1|lanbit2);
    printf("\n Wartosc ~(lanbit1|lanbit2)=%d", ~(lanbit1|lanbit2));
    printf("\n Wartosc ~lanbit1|lanbit2=%d", ~lanbit1|lanbit2);
    printf("\n Wartosc lanbit1^lanbit2=%d", lanbit1^lanbit2);
    printf("\n Wartosc  ~(lanbit1^lanbit2)=%d",  ~(lanbit1^lanbit2));
}

/*
lanbit1            0000 0000 0000 1100
lanbit2            1111 1111 1101 1101
lanbit1&lanbit2    1111 1111 1111 0011
~lanbit1&lanbit2   0000 0000 0010 0010
~(lanbit1&lanbit2) 1111 1111 1101 0001
lanbit1|lanbit2    0000 0000 0000 1101
~(lanbit1|lanbit2) 1111 1111 1101 1101
~lanbit1|lanbit2   1111 1111 1111 1111
lanbit1^lanbit2    1111 1111 1101 0001
~(lanbit1^lanbit2) 0000 0000 0010 1110
*/
