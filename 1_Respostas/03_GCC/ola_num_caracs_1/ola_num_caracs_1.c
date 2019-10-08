#include <stdio.h>
#include "num_caracs.h"

int main(int argc, char *argv[])
{
  for (int i = 0; i < argc; i++)
  {
    fprintf(stdout, "Argumento: %s / Numero de caracteres: %d\n", argv[i], Num_Caracs(argv[i]));
  }
	return(0);
}
