#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	int fp;
	char str_name[100] = "Nome: ";
	char str_age[100] = "Idade: ";
	char file_name[50];
	char name[50];
	char age[5];

	fputs("Escreva seu nome: ", stdout);
	fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = 0;
	fputs("Escreva sua idade: ", stdout);
	fgets(age, sizeof(age), stdin);
	age[strcspn(age, "\n")] = 0;
	strcpy(file_name, name);
	strcat(file_name, ".txt");
	strcat(str_name, name);
	strcat(str_age, age);
	strcat(str_age, " anos");
	fp = open(file_name, O_WRONLY | O_CREAT, S_IRWXU);
	for(i = 0; str_name[i]; i++)
	{
		write(fp, &str_name[i], 1);
	}
	write(fp, "\n", 1);
	for(i = 0; str_age[i]; i++)
	{
		write(fp, &str_age[i], 1);
	}
	close(fp);
	return(0);
}
