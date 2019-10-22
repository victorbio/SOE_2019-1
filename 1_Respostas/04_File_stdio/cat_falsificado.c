#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bib_arqs.h"

int main(int argc, char *argv[])
{
	char *str;
	for(int i = 1; i < argc; i++)
	{
		str = (char *)malloc(tam_arq_texto(argv[i]));
		fprintf(stdout, "%s", le_arq_texto(argv[i], str));
		free(str);
	}
	return(0);
}
