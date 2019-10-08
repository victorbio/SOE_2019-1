#include <stdio.h>

int main(int argc, char *argv[])
{
  fputs("Argumentos: ", stdout);
  for (int i = 1; i < argc; i++)
  {
    fprintf(stdout, "%s ", argv[i]);
  }
  fputs("\n", stdout);
	return (0);
}
