#include <stdio.h>
#include <string.h>
#include "num_caracs.h"

void main(int argc, char *argv[])
{
	int total = 0, i = 0;
  for (i = 0; i < argc; i++)
  {
		total += Num_Caracs(argv[i]);
  }
  printf("Total de caracteres de entrada: %d\n", total);
}
