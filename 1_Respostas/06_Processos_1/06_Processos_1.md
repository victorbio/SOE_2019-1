1. Como se utiliza o comando `ps` para:

(a) Mostrar todos os processos rodando na máquina?
>ps -e

(b) Mostrar os processos de um usuário?
>ps -u

(c) Ordenar todos os processos de acordo com o uso da CPU?
>ps aux --sort -c

(d) Mostrar a quanto tempo cada processo está rodando?
>ps -eo pid,comm,etime

2. De onde vem o nome `fork()`?
>O nome 'fork' em inglês pode ter o significado de bifurcação, que indica uma separação de um caminho em dois, representando a criação de dois processos a partir de um.

3. Quais são as vantagens e desvantagens em utilizar:

(a) `system()`?

(b) `fork()` e `exec()`?

4. É possível utilizar o `exec()` sem executar o `fork()` antes?
>Sim, porém o processo atual terá seus dados sobreescritos pelo comando exec(), o que pode causar perda de dados indesejada no processo.

5. Quais são as características básicas das seguintes funções:

(a) `execp()`?
>A letra 'p' indica que o comando aceita que o nome ou a procura do programa esteja no caminho atual.

(b) `execv()`?
>A letra 'v' indica que o comando aceita que a lista de argumentos do novo programa seja nula.

(c) `exece()`?
>A letra 'e' indica que o comando aceita um argumento adicional.

(d) `execvp()`?
>Com as letras 'v' e 'p', este comando aceita que a lista de argumentos do novo programa seja nula e que o nome ou a procura do programa esteja no caminho atual.

(e) `execve()`?
>Com as letras 'v' e 'e', este comando aceita que a lista de argumentos do novo programa seja nula e aceita um argumento adicional.

(f) `execle()`?
>Com as letras 'l' e 'e', este comando aceita em sua lista de argumentos a utilização de mecanismos "var args" em linguagem C, além de aceitar um argumento adicional.
