#include <stdio.h>

void main(int argc, char *argv[])
{
  int i = 0;
  printf("Argumentos: ");
  for (i = 1; i < argc; i++)
  {
    printf("%s ", argv[i]);
  }
  printf("\n");
}
