#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bib_arqs.h"

int tam_arq_texto(char *nome_arquivo)
{
	FILE *fp;
	int file_size;

	fp = fopen(nome_arquivo, "r");
	fseek(fp, 0, SEEK_END);
	file_size = ftell(fp);
	rewind(fp);
	fclose(fp);
	return(file_size);
}

char* le_arq_texto(char *nome_arquivo, char *str)
{
	FILE *fp;
	int i = 0;

	fp = fopen(nome_arquivo, "r");
	while (!feof(fp))
	{
		str[i++] = fgetc(fp);
	}
	str[strlen(str) - 1] = 0;
	fclose(fp);
	return(str);
}
