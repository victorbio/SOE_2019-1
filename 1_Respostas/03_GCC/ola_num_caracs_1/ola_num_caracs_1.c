#include <stdio.h>
#include <string.h>
#include "num_caracs.h"

void main(int argc, char *argv[])
{
  int i = 0;
  for (i = 0; i < argc; i++)
  {
    printf("Argumento: %s / Numero de caracteres: %d\n", argv[i], Num_Caracs(argv[i]));
  }
  printf("\n");
}
