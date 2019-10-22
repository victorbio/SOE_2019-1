#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char file_name[100];
	char name[100];
	char age[10];

	fputs("Escreva seu nome: ", stdout);
	fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = 0;
	fputs("Escreva sua idade: ", stdout);
	fgets(age, sizeof(age), stdin);
	age[strcspn(age, "\n")] = 0;
	strcpy(file_name, name);
	strcat(file_name, ".txt");
	fp = fopen(file_name, "w");
	fprintf(fp, "Nome: %s\nIdade: %s\n", name, age);
	fclose(fp);
	return(0);
}
