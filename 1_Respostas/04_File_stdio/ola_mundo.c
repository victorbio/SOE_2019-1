#include <stdio.h>

int main(void)
{
	FILE *fp;

	fp = fopen("ola_mundo.txt", "w");
	fputs("Ola mundo!\n", fp);
	fclose(fp);
	return(0);
}
