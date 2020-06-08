# include <stdio.h>
# include <conio.h>

int main(){
  char ch;
  char ck;
  char cl;
  fflush(stdin);
  printf("Scanf - Printf\n");
  scanf("%c", &ch);
  printf("%c\n", ch);
  getchar();
  fflush(stdin);
  printf("Getchar - Putchar\n");
  ck = getchar();
  putchar(ck);
  fflush(stdin);
  getchar();
  printf("Getch - Putch\n");
  cl = getch();
  putch(cl, stdout);
  return 0;
}
