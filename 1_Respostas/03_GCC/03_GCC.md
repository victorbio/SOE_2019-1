**Para todas as questões, compile-as com o gcc e execute-as via terminal.**

**1. Crie um "Olá mundo!" em C.**

Utilizando o arquivo ola.c, executar no terminal:
```
$ gcc -o ola ola.c
$ ./ola
```

**2. Crie um código em C que pergunta ao usuário o seu nome, e imprime no terminal "Ola " e o nome do usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_1':**
```
$ ./ola_usuario_1
$ Digite o seu nome: Eu
$ Ola Eu
```

Utilizando o arquivo ola_usuario_1.c, executar no terminal:
```
$ gcc -o ola_usuario_1 ola_usuario_1.c
$ ./ola_usuario_1
```

**3. Apresente os comportamentos do código anterior nos seguintes casos:**

**(a) Se o usuário insere mais de um nome.**
```
$ ./ola_usuario_1
$ Digite o seu nome: Eu Mesmo
```

Ola Eu Mesmo

**(b) Se o usuário insere mais de um nome entre aspas duplas. Por exemplo:**
```
$ ./ola_usuario_1
$ Digite o seu nome: "Eu Mesmo"
```

Ola "Eu Mesmo"

**(c) Se é usado um pipe. Por exemplo:**
```**
$ echo Eu | ./ola_usuario_1
```

Ola Eu

**(d) Se é usado um pipe com mais de um nome. Por exemplo:**
```
$ echo Eu Mesmo | ./ola_usuario_1
```
Ola Eu Mesmo

**(e) Se é usado um pipe com mais de um nome entre aspas duplas. Por exemplo:**
```
$ echo "Eu Mesmo" | ./ola_usuario_1
```

Ola Eu Mesmo

**(f) Se é usado o redirecionamento de arquivo. Por exemplo:**
```
$ echo Ola mundo cruel! > ola.txt
$ ./ola_usuario_1 < ola.txt
```

Ola Ola mundo cruel!

**4. Crie um código em C que recebe o nome do usuário como um argumento de entrada (usando as variáveis argc e argv), e imprime no terminal "Ola " e o nome do usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_2':**
```
$ ./ola_usuario_2 Eu
$ Ola Eu
```

Utilizando o arquivo ola_usuario_2.c, executar no terminal:
```
$ gcc -o ola_usuario_2 ola_usuario_2.c
$ ./ola_usuario_2 Eu
```

**5. Apresente os comportamentos do código anterior nos seguintes casos:**

**(a) Se o usuário insere mais de um nome.**
```
$ ./ola_usuario_2 Eu Mesmo
```

Ola Eu

**(b) Se o usuário insere mais de um nome entre aspas duplas. Por exemplo:**
```
$ ./ola_usuario_2 "Eu Mesmo"
```

Ola Eu Mesmo

**(c) Se é usado um pipe. Por exemplo:**
```
$ echo Eu | ./ola_usuario_2
```

Ola (null)

**(d) Se é usado um pipe com mais de um nome. Por exemplo:**
```
$ echo Eu Mesmo | ./ola_usuario_2
```

Ola (null)

**(e) Se é usado um pipe com mais de um nome entre aspas duplas. Por exemplo:**
```
$ echo "Eu Mesmo" | ./ola_usuario_2
```

Ola (null)

**(f) Se é usado o redirecionamento de arquivo. Por exemplo:**
```
$ echo Ola mundo cruel! > ola.txt
$ ./ola_usuario_2 < ola.txt
```

Ola (null)

**6. Crie um código em C que faz o mesmo que o código da questão 4, e em seguida imprime no terminal quantos valores de entrada foram fornecidos pelo usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_3':**
```
$ ./ola_usuario_3 Eu
$ Ola Eu
$ Numero de entradas = 2
```

Utilizando o arquivo ola_usuario_3.c, executar no terminal:
```
$ gcc -o ola_usuario_3 ola_usuario_3.c
$ ./ola_usuario_3 Eu
```

**7. Crie um código em C que imprime todos os argumentos de entrada fornecidos pelo usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_argumentos':**
```
$ ./ola_argumentos Eu Mesmo e Minha Pessoa
$ Argumentos: Eu Mesmo e Minha Pessoa
```

Utilizando o arquivo ola_argumentos.c, executar no terminal:
```
$ gcc -o ola_argumentos ola_argumentos.c
$ ./ola_argumentos Eu Mesmo e Minha Pessoa
```

**8. Crie uma função que retorna a quantidade de caracteres em uma string, usando o seguinte protótipo: `int Num_Caracs(char *string);` Salve-a em um arquivo separado chamado 'num_caracs.c'. Salve o protótipo em um arquivo chamado 'num_caracs.h'. Compile 'num_caracs.c' para gerar o objeto 'num_caracs.o'.**

Utilizando o arquivo num_caracs.c e num_caracs.h, executar no terminal:
```
$ gcc -c num_caracs.c
```

**9. Re-utilize o objeto criado na questão 8 para criar um código que imprime cada argumento de entrada e a quantidade de caracteres de cada um desses argumentos. Por exemplo, considerando que o código criado recebeu o nome de 'ola_num_caracs_1':**
```
$ ./ola_num_caracs_1 Eu Mesmo
$ Argumento: ./ola_num_caracs_1 / Numero de caracteres: 18
$ Argumento: Eu / Numero de caracteres: 2
$ Argumento: Mesmo / Numero de caracteres: 5
```

Utilizando os arquivos na pasta ola_num_caracs_1, executar no terminal:
```
$ gcc -c ola_num_caracs_1.c
$ gcc -o ola_num_caracs_1 num_caracs.o ola_num_caracs_1.o
$ ./ola_num_caracs_1 Eu Mesmo
```

**10. Crie um Makefile para a questão anterior.**

Utilizando os arquivos na pasta ola_num_caracs_1, executar no terminal:
```
$ make
$ ./ola_num_caracs_1 Eu Mesmo
```

**11. Re-utilize o objeto criado na questão 8 para criar um código que imprime o total de caracteres nos argumentos de entrada. Por exemplo, considerando que o código criado recebeu o nome de 'ola_num_caracs_2':**
```
$ ./ola_num_caracs_2 Eu Mesmo
$ Total de caracteres de entrada: 25
```

Utilizando os arquivos na pasta ola_num_caracs_2, executar no terminal:
```
$ gcc -c ola_num_caracs_2.c
$ gcc -o ola_num_caracs_2 num_caracs.o ola_num_caracs_2.o
$ ./ola_num_caracs_2 Eu Mesmo
```

**12. Crie um Makefile para a questão anterior.**

Utilizando os arquivos na pasta ola_num_caracs_2, executar no terminal:
```
$ make
$ ./ola_num_caracs_2 Eu Mesmo
```
