#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	int fp;
	char string[] = "Ola mundo!";

	fp = open("ola_mundo.txt", O_WRONLY | O_CREAT, S_IRWXU);
	for(int i = 0; string[i]; i++)
	{
		write(fp, &string[i], 1);
	}
	close(fp);
	return(0);
}
