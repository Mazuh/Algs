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
    FILE *arquivoDeEntrada2 = fopen("iniciais.txt", "r");
    FILE *arquivoDeSaida = fopen("saida.txt", "w");
    FILE *arquivoDeSaida2 = fopen("saida.bin", "wb");

    /* Qualquer bloco de exemplo deve ser inserido aqui. */

    fclose(arquivoDeEntrada);
    fclose(arquivoDeEntrada2);
    fclose(arquivoDeSaida);
    fclose(arquivoDeSaida2);

    return 0;
}
```

Condicionais de segurança e integridade (algo que se aproxime de _tratamento de exceções_ e memória)
foram propositalmente removidas também, por fins didáticos.

Também está sendo considerada a presença de um arquivo de texto,
no mesmo diretório, chamado ```pontos.txt```, cujo conteúdo é:

```
Yuri 20
Douglas 25
Marcell 19
Italo 48
Daniel 11
```

E outro, chamado ```iniciais.txt``` cujo conteúdo é:

```
MG
DB
```

Há, ainda, dois últimos arquivos vazios chamado ```saida.txt``` e ```saida.bin```:
```

```

Cada bloco de exemplo antecederá imediatamente sua saída de execução (nos
exemplos de escrita, a saída será o conteúdo do arquivo, já nos exemplos
de entrada, será a saída padrão).

### Leitura

* **```fgetc```: Lê caracter.**

```C
char c1 = fgetc(arquivoDeEntrada);
char c2 = fgetc(arquivoDeEntrada);
printf("Foi lido '%c' e depois '%c'.\n", c1, c2);
```

> Foi lido 'Y' e depois 'u'.

* **```fgets```: Lê linha de caracteres.**

```C
char string[20];
fgets (string, 5, arquivoDeEntrada);
printf("Foi lida parte da primeira linha: \"%s\".\n", string);
```

> Foi lida parte da primeira linha: "Yuri".

* **```fscanf```: Lê dados usando formatação.**

```C
char nome[20];
int pontos;
fscanf (arquivoDeEntrada, "%s %d", nome, &pontos);
printf("%s marcou %d pontos!\n", nome, pontos);
fscanf (arquivoDeEntrada, "%s %d", nome, &pontos);
printf("E %s marcou %d pontos!\n", nome, pontos);
```

> Yuri marcou 20 pontos!
>
> E Douglas marcou 25 pontos!

* **```fread```: Lê um bloco de dados.**

```C
char buffer[5];

// diz que cada dado é de 1 byte, e tentará ler 5 deles
// note que o fim da linha (ENDL) é considerado um caracter também
fread(buffer, 1, sizeof buffer, arquivoDeEntrada2);

printf("As letras iniciais eram '%c' e '%c'.\n", buffer[0], buffer[3]);
```

> As letras iniciais eram 'M' e 'D'.

### Escrita

* **```fputc```: Escreve caracter.**

```C
fputc ('M', arquivoDeSaida);
fputc ('G', arquivoDeSaida);
fputc ('\n', arquivoDeSaida); // fim da linha (é necessário?)
```

> MG

* **```fputs```: Escreve linha de caracteres.**

```C
fputs("Marcell Guilherme\n", arquivoDeSaida);
```

> Marcell Guilherme

* **```fprintf```: Escreve dados na transmissão usando formatação.**

```C
fprintf(arquivoDeSaida, "%s completa %d anos em %s.\n", "Marcell", 2017-1997, "junho");
```

> Marcell completa 20 anos em junho.

* **```fwrite```: Escreve um bloco de dados.**

```C
char buffer[] = {'M', 'G', '\n'};
fwrite (buffer , sizeof(char), sizeof(buffer), arquivoDeSaida2);
```

> MG
