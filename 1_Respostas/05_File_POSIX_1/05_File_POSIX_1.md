**1. Considerando a biblioteca-padrão da linguagem C, responda:**

**(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?**
```
FILE *fopen(const char *filename, const char *mode);
int fclose(FILE *stream);
```

**(b) Quais são as funções (e seus protótipos) para escrever em arquivos?**
```
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
int fprintf(FILE *stream, const char *format);
int printf(const char *format);
int sprintf(char *str, const char *format);
int vfprintf(FILE *stream, const char *format, va_list arg);
int vprintf(const char *format, va_list arg);
int vsprintf(char *str, const char *format, va_list arg);
int fputc(int char, FILE *stream);
int fputs(const char *str, FILE *stream);
int putc(int char, FILE *stream);
int putchar(int char);
int puts(const char *str);
```

**(c) Quais são as funções (e seus protótipos) para ler arquivos?**
```
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
int fscanf(FILE *stream, const char *format);
int scanf(const char *format);
int sscanf(const char *str, const char *format);
int fgetc(FILE *stream);
char *fgets(char *str, int n, FILE *stream);
int getc(FILE *stream);
int getchar(void);
char *gets(char *str);
int ungetc(int char, FILE *stream);
```

**(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?**
```
int fseek(FILE * stream, long int offset, int whence);
int fsetpos(FILE *stream, const fpos_t *pos);
void rewind(FILE *stream);
```

**(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?**
```
#include <stdio.h>
```

**2. O que é a norma POSIX?**

POSIX é uma família de normas definidas pelo IEEE que auxilia na compatibilidade e portabilidade de programas entre sistemas operacionais.

**3. Considerando a norma POSIX, responda:**

**(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?**
```
int open(const char *pathname, int flags);
int creat(const char *pathname, mode_t mode);
int close(int fd);
```

**(b) Quais são as funções (e seus protótipos) para escrever em arquivos?**
```
ssize_t write(int fd, const void *buf, size_t count);
```

**(c) Quais são as funções (e seus protótipos) para ler arquivos?**
```
ssize_t read(int fd, void *buf, size_t count);
```

**(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?**
```
offt_t lseek(int fildes, off_t offset, int whence);
```

**(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?**
```
#include <unistd.h>
```
