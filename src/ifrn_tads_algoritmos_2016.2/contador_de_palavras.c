#include <stdio.h>

int main(){

    char character = ' ';
    char lastChar = ' ';

    int cont = 0;

    while(1){
        scanf("%c", &character);

        if(character != ' ' && lastChar == ' '){
            cont = cont + 1;
        } else if (character == '\n'){
            printf("Tem %d palavras.\n", cont);
            return 0;
        }

        lastChar = character;

    }

}
