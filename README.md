[![](https://img.shields.io/badge/clang-black?logo=c&style=for-the-badge)](https://learnxinyminutes.com/c/)

# Debxp: Curso básico da linguagem C

Códigos do curso de C disponibilizado pelo canal debxp: https://www.youtube.com/playlist?list=PLXoSGejyuQGrDX08GVrQHAhh4j3KJ4iYN.

## Aula 1
> https://gitlab.com/blau_araujo/cblc/-/tree/main/aulas/01-historia

Introdução à linguagem e à história do c.

Arquivos:
- [salve.c](aula1/salve.c) exibe uma string.

## Aula 2
> https://gitlab.com/blau_araujo/cblc/-/tree/main/aulas/02-dados-e-instrucoes

Básico de aritmética, constantes e declaração de funções.

Arquivos:
- [x10.c](aula2/x10.c) multiplica dois inteiros.
- [x10func.c](aula2/x10const.c) define e usa uma função que multiplica por 10.
- [x10const.c](aula2/x10const.c) define uma constante e multiplica dois inteiros.
- [quadrado.c](aula2/quadrado.c) função quadrática.

## Aula 3
> https://gitlab.com/blau_araujo/cblc/-/tree/main/aulas/03-tipos-de-dados

Tipos e tamanhos de dados.

Arquivos:
- [quadrado.c](aula3/quadrado.c) função quadrática e um erro de overflow.
- [quadrado-long.c](aula3/quadrado-long.c) função quadrática usando long int.
- [dump.c](aula3/dump.c) tamanho de int vs long.
- [limites.c](aula3/limites.c) tamanhos e limites de tipos em c.

## Aula 4
> https://gitlab.com/blau_araujo/cblc/-/tree/main/aulas/04-variaveis

Um pouco mais sobre váriaveis, ponteiros e escopos.

Arquivos:
- [var1.c](aula4/var1.c) exibe valores de variáveis.
- [var2.c](aula4/var2.c) exibe valores de váriaveis, endereços, tamanhos e valores.
- [var3.c](aula4/var3.c) não compila por problemas de escopo propositais.
- [var4.c](aula4/var4.c) aritmética de ponteiros.

## Aula 5
> https://gitlab.com/blau_araujo/cblc/-/tree/main/aulas/05-controle

Controle de fluxo.

Arquivos:
- [loop1.c](aula5/loop1.c) loop simples usando for.
- [loop2.c](aula5/loop2.c) loop simples usando while.
- [loop3.c](aula5/loop3.c) loop reverso simples usando do-while.
- [loop4.c](aula5/loop4.c) loop simples usando for e if-else's.
- [loop5.c](aula5/loop5.c) loop simples usando for e switch-case.

## Aula 6
> https://gitlab.com/blau_araujo/cblc/-/tree/main/aulas/06-vetores

Vetores e ponteiros.

Arquivos:
- [array1-with-vars.c](aula6/array1-with-vars.c) variáveis para calcular somatório e média de notas (sem arrays).
- [array1.c](aula6/array1.c) array para calcular somatório e média de uma lista de notas.
- [array2.c](aula6/array2.c) navega por um array usando ponteiros.
- [array3.c](aula6/array3.c) exibe valores de array antes e depois de definir valores.
- [array4.c](aula6/array4.c) array como parâmetro de funções.
- [array5.c](aula6/array5.c) exibe endereço e pointeiro de um array.
- [array6.c](aula6/array6.c) array de characteres e ponteiro de characteres.

## Aula 7
> https://gitlab.com/blau_araujo/cblc/-/tree/main/aulas/07-vps

Vetores, ponteiros e strings.

Arquivos:
- [array-and-pointer1.c](aula7/array-and-pointer1.c) formas de se declarar um vetor.
- [array-and-pointer2.c](aula7/array-and-pointer2.c) exibe valores de vetores e ponteiros de forma comparativa (com tabela de notação).
- [array-and-pointer3.c](aula7/array-and-pointer3.c) declarando um ponteiro para string.
- [array-and-pointer4.c](aula7/array-and-pointer4.c) media de notas com array e ponteiro.


## Aula 8
> https://gitlab.com/blau_araujo/cblc/-/tree/main/aulas/08-processos

Processos e layout de memória.

Arquivos:
- [fork-exec.c](aula8/fork-exec.c) formas de se declarar um vetor.
- [layout-memoria.org](aula8/layout-memoria.org) tabela com o layout de memória.
- [mmap.c](aula8/nmap.c) layout de memória como obtido em /proc/self/maps.

## Aula 9
> https://gitlab.com/blau_araujo/cblc/-/tree/main/aulas/09-args

Argumentos e ambiente.

Arquivos:
- [args0.c](aula9/args0.c) imprime um array de strings.
- [args1.c](aula9/args1.c) imprime argv.
- [args2.c](aula9/args2.c) soma argumentos usando strtol.
- [args3.c](aula9/args3.c) imprime variáveis de ambiente getenv.

## Aula 10
> https://gitlab.com/blau_araujo/cblc/-/tree/main/aulas/10-dataio

Entrada e saída padrão.

Arquivos:
- [io0.c](aula10/io0.c) usa stdlib.h system para exibir descritores de arquivos.
- [io1.c](aula10/io1.c) exibe descritores de arquivos do programa e do pipe. (execute com pipe `./io1 | cat`).

## Aula 11
> https://gitlab.com/blau_araujo/cblc/-/tree/main/aulas/11-scanf

Leitura da entrada padrão com ‘scanf’.

Arquivos:
- [io0.c](aula11/io0.c) verifica se stdin é o terminal.
- [io1.c](aula11/io1.c) muda o arquivo de entrada para stdin criando um redirecionamento.
- [io2.c](aula11/io2.c) usa fgets ao invés de scanf para obter input do usuário.
- [io3.c](aula11/io3.c) usa fgets com strim.
- [io4.c](aula11/io4.c) usa read ao invés de fgets e scanf.


## Aula 12
> https://gitlab.com/blau_araujo/cblc/-/tree/main/aulas/14-rfiles

Leitura e escrita em arquivos.

Arquivos:
- [fread.c](aula12/fread.c) lê o conteúdo de um arquivo passado como parametro.
- [fwrite.c](aula12/fwrite.c) escreve o conteúdo de um arquivo.
- [fread-write.c](aula12/fread-write.c) lê e escreve o conteúdo de um arquivo.

## Extra

Comunicação entre emacs and c

- [emacs0.c](extra/emacs0.c) read stdin em loop.
- [emacs0.el](extra/emacs0.el) inicia um processo com emacs0.c e envia uma string.
