# On File Project

Exemplo mais simples possível, utilizando um único arquivo fonte, **main.c**,  na raiz do projeto.

### Compilando:

Para gerar os arquivos de compilação crie um diretório de **build** na raiz do projeto

>**mkdir build**

e dentro deste diretório

>**cd build**

execute o comando

>**cmake ..** 

ou

>**cmake -G="Generators" ..** 

substituindo **Generators** pelo gerador desejado, para saber quais os geradores disponíveis execute o comando

>**cmake --help**

e por fim execute a ferramenta de compilação adequada.

#### Exemplo usando o MinGW no windows

>**mkdir build**
>**cd buld**
>**cmake -G="MinGW Makefiles" ..**
>**mingw32-make**