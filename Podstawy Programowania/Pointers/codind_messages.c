#include <stdio.h>
#include <string.h>
#define SIZE 100

void code(char *p_string);

int main()
{
    char string[SIZE];
    char *p_string = NULL;
    p_string = string;
    fputs("Input string for code:\n", stdout);
    fgets(string,SIZE-1,stdin);
    code(p_string);
    fputs(string,stdout);
    code(p_string);
    fputs("\n",stdout);
    fputs(string,stdout);
}

void code(char *p_string){
    while(*p_string){
        *p_string = *p_string ^ 824563;
        *p_string++;
    }
}
