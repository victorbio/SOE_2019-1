1. Considerando a biblioteca-padrão da linguagem C, responda:

(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?
>FILE *fopen (char *file_name, char *mode);
int fclose (FILE *fp);

(b) Quais são as funções (e seus protótipos) para escrever em arquivos?
>int putc (int ch, FILE *fp);

(c) Quais são as funções (e seus protótipos) para ler arquivos?
>int getc (FILE *fp);

(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?
>int fseek (FILE * stream, long int offset, int origin);

(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?
>stdio.h e stdlib.h

2. O que é a norma POSIX?
>POSIX é uma família de normas definidas pelo IEEE que auxilia na compatibilidade e portabilidade de programas entre sistemas operacionais.

3. Considerando a norma POSIX, responda:

(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?

(b) Quais são as funções (e seus protótipos) para escrever em arquivos?

(c) Quais são as funções (e seus protótipos) para ler arquivos?

(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?

(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?
