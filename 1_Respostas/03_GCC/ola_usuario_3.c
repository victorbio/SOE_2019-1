#include <stdio.h>

int main(int argc, char *argv[])
{
  fprintf(stdout, "Ola %s\n", argv[1]);
	fprintf(stdout, "Numero de entradas = %d\n", argc);
	return(0);
}
