# Tarefa: Manipulação de Arquivos em C

## Sobre

Descrição da atividade:
> Pesquisar sobre as outras funções de leitura/escrita em arquivos da linguagem C. 
> Para cada uma que encontrar, indicar como deve ser usada e apresentar um exemplo SEU.
> 
> Fontes sugeridas:
> 1. https://www.tutorialspoint.com/c_standard_library/stdio_h.htm
> 2. http://www.cplusplus.com/reference/cstdio/

## Funções
As funções aqui listadas esto presentes na biblioteca ```stdio.h```, que se trata
do padrão (_**st**andar**d**_) para entrada e saída (_**i**nput and **o**utput_)
de dados. Não foram inclusas aqui funções do C11.

Os trechos de código exemplificadores abaixo consideram a presença de um cabeçalho e
rodapé constantes (mas que ficarão implícitos para manter os exemplos enxutos):

```C
#include <stdio.h>

int main(){
    FILE *arquivoDeEntrada = fopen("pontos.txt", "r");
    
    /* Qualquer bloco de exemplo deve ser inserido aqui. */
    
    return 0;
}
```

Condicionais de segurança e integridade (algo que se aproxime de _tratamento de exceções_)
foram propositalmente removidas também, por fins didáticos.

Também está sendo considerada a presença de um arquivo de texto,
no mesmo diretório, chamado ```pontos.txt```, cujo conteúdo é:

```
Douglas 20
Marcell 16
```

### Leitura

* ```fgetc```
Lê caracter.

Exemplo:

```C
char c1 = fgetc(arquivoDeEntrada);
char c2 = fgetc(arquivoDeEntrada);
printf("Foi lido '%c' e depois '%c'.\n", c1, c2);
```
Saída:

> Foi lido 'D' e depois 'o'.

* ```fgets```
Lê linha de caracteres.

* ```fscanf```:
Lê dados usando formatação.

* ```vfscanf```:
Lê dados usando formatação e armazena em uma lista variável de argumentos.

### Escrita

* ```fputc```
Escreve caracter.

* ```fputs```
Escreve linha de caracteres..

* ```fprintf```:
Escreve dados na transmissão usando formatação.

* ```vfprintf```:
Escreve dados de uma lista variável de argumentos.

