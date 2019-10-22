#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bib_arqs.h"

int main(int argc, char *argv[])
{
	char *str;
	int i = 0;
	int counter = 0;

	str = (char *)malloc(tam_arq_texto(argv[2]));
	le_arq_texto(argv[2], str);
	
	{

		if (strstr(argv[1], str))
		{
			counter++;
		}
		i++;
	}
	fprintf(stdout, "%s ocorre 2 vezes no arquivo %s.", argv[1], argv[2]);
	free(str);
	return(0);
}
