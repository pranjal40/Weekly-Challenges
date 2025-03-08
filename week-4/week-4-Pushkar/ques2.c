#include <stdio.h>
#include <string.h>

int main() {
  char str[50];
  int i=0;
  printf("enter a string\n");
  fgets(str,50,stdin);
  loopStart:
  while (str[i]!=' ')
  {
      printf("%c",str[i]);
      i++;
  }
  if (str[i]==' ')
  {
      printf("\n");
      i++;
      goto loopStart;
  }
}