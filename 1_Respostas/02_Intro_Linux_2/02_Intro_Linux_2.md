Para todas as questões, escreva os comandos correspondentes no terminal.

1. Escreva o texto "Ola mundo cruel!" em um arquivo denominado "Ola_mundo.txt". Apresente o conteúdo deste arquivo no terminal.
>echo Ola mundo cruel! >> Ola_mundo.txt
>cat Ola_mundo.txt

2. Apresente o nome de todos os arquivos e pastas na pasta 'root'.
>ls /

3. Apresente o tipo de todos os arquivos e pastas na pasta 'root'.
>file /*

4. Apresente somente as pastas dentro da pasta 'root'.
>ls -d /*/

5. Descubra em que dia da semana caiu o seu aniversário nos últimos dez anos.
>date -d "2018-05-03" +"%A"
date -d "2017-05-03" +"%A"
date -d "2016-05-03" +"%A"
date -d "2015-05-03" +"%A"
date -d "2014-05-03" +"%A"
date -d "2013-05-03" +"%A"
date -d "2012-05-03" +"%A"
date -d "2011-05-03" +"%A"
date -d "2010-05-03" +"%A"
date -d "2009-05-03" +"%A"

Para as questões a seguir, use a pasta no endereço https://github.com/DiogoCaetanoGarcia/Sistemas_Embarcados/raw/master/Questoes/02_Intro_Linux_arqs.zip

6. Liste somente os arquivos com extensão .txt.
>ls | grep .txt

7. Liste somente os arquivos com extensão .png.
>ls | grep .png

8. Liste somente os arquivos com extensão .jpg.
>ls | grep .jpg

9. Liste somente os arquivos com extensão .gif.
>ls | grep .gif

10. Liste somente os arquivos que contenham o nome 'cal'.
>ls *cal*

11. Liste somente os arquivos que contenham o nome 'tux'.
>ls *tux*

12. Liste somente os arquivos que comecem com o nome 'tux'.
>ls tux*
