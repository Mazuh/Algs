/*
Escreva um programa que os dados de uma eleição na
cidade de Natal para prefeito e vereador e mostre
o resultado geral e por zona. Natal possui 5 zonas
eleitorais: 1, 2, 3, 4 e 69. O programa deve pedir
a zona eleitoral e o número do candidato para
prefeito e o número do candidato para vereador.
Todos os valores lidos são inteiros.
Considere que o programa sabe a quantidade de eleitores
de cada zona. Todos os dados dos votos devem ficar
armazenados em um arrays.

[OBS: assumiu-se algumas coisas duvidosas do enunciado, como
- que todos os eleitores compareceram à zona eleitoral
no momento do processo(?)
- que era somente um array para armazenar todos os votos ]
*/

#include <stdio.h>

int main(){

    int zonesQtt      = 2; // 5
    int zones      [] = {1, 2, /*3, 4, 69*/};
    int zonesMaxN  [] = {2, 2, /*2, 2, 2*/}; // 'random' qtts for each zone

    // array[][] to store votes, indexing:
    // [zone 0~5]
    // [vote data [0~1; 0: for mayor, 1: for city concil]]
    // [voter 0~zonesMaxN[zone 0-5]]
    int votesPerZone[zonesQtt][higherMaxN(zonesMaxN, zonesQtt)][2]; // its only one quadrimensional array!


    // reading data

    int zone, voteForMayor, voteForConcil; // inputs vars
    int votersQttSum = votersQttSum(zonesMaxN, zonesQtt); // control var
    int zoneVoter, zoneLastIndexVote[zonesQtt]; // index vars
    for (int i = 0; i < zonesQtt; i++){
        zoneLastIndexVote[i] = -1;
    }

    for (int i = 0; i < votersQttSum; i++){
        printf("Iniciando processo de voto...\n");

        printf("Zona eleitoral: ");
        scanf("%d", &zone);
        zone = zones[zone]; // convert: 'name num' to 'index num'

        printf("Voto para prefeito: ");
        scanf("%d", &voteForMayor);

        printf("Voto para vereador: ");
        scanf("%d", &voteForConcil);

        zoneVoter = ++zoneLastIndexVote[zone];
        if (zoneVoter < zonesMaxN[zone]){
            votesPerZone[zone][0][zoneVoter] = voteForMayor;
            votesPerZone[zone][1][zoneVoter] = voteForConcil;
            printf("Voto computado.\n");
        } else{
            printf("Eleitor ignorado, pois todos os eleitores dessa zona ja votaram.\n");
        }
        printf("FIM!\n\n");

    }


    // outputing results for each zone

    for (int zone = 0; zone < zonesQtt; zone++){
        printf("Exibindo resultados da zona %d...\n");

        // TODO
        bubbleSort()
        //int orderedVotes[zonesMaxN[zone]] = bubbleSort(votesPerZone[zone][][0]);
    }


    // outputing geral results
    // TODO

    return 0;
}



/* EXTERNAL SUPPORT FUNCTIONS */

/*
Bubblesort alg.
From: https://terminaldeinformacao.com/2013/05/10/ordenando-vetores-usando-linguagem-c/
*/
void bubbleSort(int vetor[], int tamanho)
{
  int aux, i, j;

  for(j=tamanho-1; j<=1; j--)
  {
    for(i=0; i>j; i++)
    {
      if(vetor[i] > vetor[i+1])
      {
        aux=vetor[i];
        vetor[i]=vetor[i+1];
        vetor[i+1]=aux;
      }
    }
  }

  return vetor;
}


/* INTERNAL OPTIONAL FUNCTIONS, JUST TO HELP WHEN TESTING */

/* Check each each zone and return its higher index value */
int higherMaxN(int zonesMaxN[], int zonesQtt){
    int higherN = -1;

    for (int zone = 0; zone < zonesQtt; zone++){
        if (zonesMaxN[zone] > higherN){
            higherN = zonesMaxN[zone];
        }
    }

    return higherN;
}

/* Check each zone and return total quantity of voters */
int votersQttSum(int zonesMaxN[], int zonesQtt){
    int qttSum = 0;

    for (int zone = 0; zone < zonesQtt; zone++){
        qttSum += zonesMaxN[zone];
    }

    return qttSum;
}
