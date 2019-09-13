Para todas as questões, compile-as com o gcc e execute-as via terminal.

1. Crie um "Olá mundo!" em C.
>Utilizando o arquivo ola.c, executar pelo terminal:                    
gcc ola.c -o ola                                                        
./ola

2. Crie um código em C que pergunta ao usuário o seu nome, e imprime no terminal "Ola " e o nome do usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_1':

```bash
$ ./ola_usuario_1
$ Digite o seu nome: Eu
$ Ola Eu
```
>Utilizando o arquivo ola_usuario_1.c, executar no terminal:            
gcc ola_usuario_1.c -o ola_usuario_1                                    
./ola_usuario_1

3. Apresente os comportamentos do código anterior nos seguintes casos:

(a) Se o usuário insere mais de um nome.
```bash
$ ./ola_usuario_1
$ Digite o seu nome: Eu Mesmo
```
>Ola Eu

(b) Se o usuário insere mais de um nome entre aspas duplas. Por exemplo:
```bash
$ ./ola_usuario_1
$ Digite o seu nome: "Eu Mesmo"
```
>Ola "Eu

(c) Se é usado um pipe. Por exemplo:
```bash
$ echo Eu | ./ola_usuario_1
```
>Ola Eu

(d) Se é usado um pipe com mais de um nome. Por exemplo:
```bash
$ echo Eu Mesmo | ./ola_usuario_1
```
>Ola Eu

(e) Se é usado um pipe com mais de um nome entre aspas duplas. Por exemplo:
```bash
$ echo "Eu Mesmo" | ./ola_usuario_1
```
>Ola Eu

(f) Se é usado o redirecionamento de arquivo. Por exemplo:
```bash
$ echo Ola mundo cruel! > ola.txt
$ ./ola_usuario_1 < ola.txt
```
>Ola Ola

4. Crie um código em C que recebe o nome do usuário como um argumento de entrada (usando as variáveis argc e *argv[]), e imprime no terminal "Ola " e o nome do usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_2':

```bash
$ ./ola_usuario_2 Eu
$ Ola Eu
```
>Utilizando o arquivo ola_usuario_2.c, executar no terminal:            
gcc ola_usuario_2.c -o ola_usuario_2                                    
./ola_usuario_2

5. Apresente os comportamentos do código anterior nos seguintes casos:

(a) Se o usuário insere mais de um nome.
```bash
$ ./ola_usuario_2 Eu Mesmo
```
>Ola Eu

(b) Se o usuário insere mais de um nome entre aspas duplas. Por exemplo:
```bash
$ ./ola_usuario_2 "Eu Mesmo"
```
>Ola Eu Mesmo

(c) Se é usado um pipe. Por exemplo:
```bash
$ echo Eu | ./ola_usuario_2
```
>Ola (null)

(d) Se é usado um pipe com mais de um nome. Por exemplo:
```bash
$ echo Eu Mesmo | ./ola_usuario_2
```
>Ola (null)

(e) Se é usado um pipe com mais de um nome entre aspas duplas. Por exemplo:
```bash
$ echo "Eu Mesmo" | ./ola_usuario_2
```
>Ola (null)

(f) Se é usado o redirecionamento de arquivo. Por exemplo:
```bash
$ echo Ola mundo cruel! > ola.txt
$ ./ola_usuario_2 < ola.txt
```
>Ola (null)

6. Crie um código em C que faz o mesmo que o código da questão 4, e em seguida imprime no terminal quantos valores de entrada foram fornecidos pelo usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_3':

```bash
$ ./ola_usuario_3 Eu
$ Ola Eu
$ Numero de entradas = 2
```
>Utilizando o arquivo ola_usuario_3.c, executar no terminal:            
gcc ola_usuario_3.c -o ola_usuario_3                                    
./ola_usuario_3

7. Crie um código em C que imprime todos os argumentos de entrada fornecidos pelo usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_argumentos':

```bash
$ ./ola_argumentos Eu Mesmo e Minha Pessoa
$ Argumentos: Eu Mesmo e Minha Pessoa
```
>Utilizando o arquivo ola_argumentos.c, executar no terminal:           
gcc ola_argumentos.c -o ola_argumentos                                  
./ola_argumentos

8. Crie uma função que retorna a quantidade de caracteres em uma string, usando o seguinte protótipo:
`int Num_Caracs(char *string);` Salve-a em um arquivo separado chamado 'num_caracs.c'. Salve o protótipo em um arquivo chamado 'num_caracs.h'. Compile 'num_caracs.c' para gerar o objeto 'num_caracs.o'.
>Utilizando o arquivo num_caracs.c, executar no terminal:               
gcc num_caracs.c -c

9. Re-utilize o objeto criado na questão 8 para criar um código que imprime cada argumento de entrada e a quantidade de caracteres de cada um desses argumentos. Por exemplo, considerando que o código criado recebeu o nome de 'ola_num_caracs_1':

```bash
$ ./ola_num_caracs_1 Eu Mesmo
$ Argumento: ./ola_num_caracs_1 / Numero de caracteres: 18
$ Argumento: Eu / Numero de caracteres: 2
$ Argumento: Mesmo / Numero de caracteres: 5
```
>Utilizando os arquivos na pasta ola_num_caracs_1, executar no terminal:
make                                                                    
./ola_num_caracs_1 Eu Mesmo

10. Crie um Makefile para a questão anterior.
>Arquivo criado e utilizado no item 9.

11. Re-utilize o objeto criado na questão 8 para criar um código que imprime o total de caracteres nos argumentos de entrada. Por exemplo, considerando que o código criado recebeu o nome de 'ola_num_caracs_2':

```bash
$ ./ola_num_caracs_2 Eu Mesmo
$ Total de caracteres de entrada: 25
```
>Utilizando os arquivos na pasta ola_num_caracs_2, executar no terminal:
make                                                                    
./ola_num_caracs_2 Eu Mesmo

12. Crie um Makefile para a questão anterior.
>Arquivo criado e utilizado no item 11.
