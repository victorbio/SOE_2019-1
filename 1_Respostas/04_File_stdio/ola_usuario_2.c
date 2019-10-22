#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char file_name[100];
	char name[100];
	char age[10];

	strcpy(file_name, argv[1]);
	strcat(file_name, ".txt");
	fp = fopen(file_name, "w");
	fprintf(fp, "Nome: %s\nIdade: %s\n", argv[1], argv[2]);
	fclose(fp);
	return(0);
}
