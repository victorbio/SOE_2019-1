#include <stdio.h>

int main(void)
{
  char name[100];
	fputs("Digite o seu nome: ", stdout);
	fgets(name, sizeof(name), stdin);
	fprintf(stdout, "Ola %s", name);
	return (0);
}
