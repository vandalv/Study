#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    scanf("%c", &ch);
    if(isalnum(ch)){
      printf("\nCharacter - %c is alfanumeric", ch);
    }
    else{
      printf("\nCharacter - %c is not alfanumeric", ch);
    }
    if(isalpha(ch)){
      printf("\nCharacter - %c is alphabetic", ch);
    }
    else{
      printf("\nCharacter - %c is not alphabetic", ch);
    }
    if(iscntrl(ch)){
      printf("\nCharacter - %c is control character", ch);
    }
    else{
      printf("\nCharacter - %c is not control character", ch);
    }
    if(isdigit(ch)){
      printf("\nCharacter - %c is digit", ch);
    }
    else{
      printf("\nCharacter - %c is not a digit", ch);
    }
    if(isgraph(ch)){
      printf("\nCharacter - %c has graphical representation using locale", ch);
    }
    else{
      printf("\nCharacter - %c is not has graphical representation using locale", ch);
    }
    if(islower(ch)){
      printf("\nCharacter - %c is lowercase letter", ch);
    }
    else{
      printf("\nCharacter - %c is not lowercase letter", ch);
    }
    if(isprint(ch)){
      printf("\nCharacter - %c is is printable", ch);
    }
    else{
      printf("\nCharacter - %c is not is printable", ch);
    }
    if(ispunct(ch)){
      printf("\nCharacter - %c is a punctuation character", ch);
    }
    else{
      printf("\nCharacter - %c is not a punctuation character", ch);
    }
    if(isspace(ch)){
      printf("\nCharacter - %c is white-space", ch);
    }
    else{
      printf("\nCharacter - %c is not a white-space", ch);
    }
    if(isupper(ch)){
      printf("\nCharacter - %c is an uppercase letter", ch);
    }
    else{
      printf("\nCharacter - %c is not an uppercase letter", ch);
    }
    if(isxdigit(ch)){
      printf("\nCharacter - %c is a hexadecimal digit", ch);
    }
    else{
      printf("\nCharacter - %c is not a hexadecimal digit", ch);
    }
    return 0;
}
