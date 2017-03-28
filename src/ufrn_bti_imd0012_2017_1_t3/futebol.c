
#include <stdio.h>

/* INTERN LOEW LEVEL CONSTANTS */
#define FULL_STR_SIZE 10
#define NULL_INDEX -1
#define OS_ERROR_CODE 666

/* INTERN HIGH LEVEL CONSTANTS */ 
#define TEAMS_QTT 3
#define DATA_COLS_QTT 3
#define PT_PER_VICTORY 3
#define PT_PER_DRAW 3
#define PT_PER_DEFEAT 3

/* COLUMNS ID FOR DATA TABLE */
#define COL_GOALS_SCORED 0
#define COL_GOALS_TAKEN 1
#define COL_VICTORIES 2 /* for each: +1 when goals scored > goals taken */
#define COL_POINTS 3 /* for each: +3 points per victory, +1 point per draw match */
#define COL_GOALS_BALANCES 4 /* for each balance = scored - taken */
#define COL_GOALS_AVERAGES 5 /* for each average = scored / taken (where taken > 0) */


/* Aux function: 1 if both are equals, 0 otherwise */
int strAreEquals(char str1[], char str2[], int maxSize){
	int i;
	for (i = 0; i < maxSize; i++){
		if(str1[i] != str2[i])
			return 0; //printf("%c is different than %c at %d\n", str1[i], str2[i], i); }
		//else printf("%c is equals to %c at %d\n", str1[i], str2[i], i);
	}
	return 1;
}

/* Generate an amount of points gained by a team who scored g1 goals and taken g2 goals */
float points(int g1, int g2){
	if      (g1 > g2) 	return PT_PER_VICTORY;
	else if (g1 == g2)  return PT_PER_DRAW;
	else 				return PT_PER_DEFEAT;
}

/* Gets the total of goals scored and taken (in this order) and generate the average for this team */
float average(float g1, float g2){
	if (g2 == 0) return 0;
	else 		 return g1/g2;
}

/* Main function 

INPUT SUGGESTION (presentation errors may happen if you just copy and paste, but I think the data will be processed just fine):

3
Milan 3 x 0 Barcelona
Milan 3 x 3 Barcelona
Vascao 8 x 4 Barcelona

*/
int main(){

	int gamesQtt;

	char table_names[TEAMS_QTT][FULL_STR_SIZE] = {"Vascao", "Barcelona", "Milan"};
	int table_names_sizes[TEAMS_QTT] = {6, 9, 5}; /* real chars qtt of each string from table_names, excluding any null values */
	float table_data[TEAMS_QTT][6]; /* access all [][k] values letting k assume a pre-proccessed constant COL_* */

	int i, j;

	/* restart all elements */
	for (i = 0; i < TEAMS_QTT; i++){
		for(j = 0; j < DATA_COLS_QTT; j++){
			table_data[i][j] = 0;
		}
	}

	/* start user interface */

	printf("Times cadastrados:\n");
	for (i = 0; i < TEAMS_QTT; i++){
		printf("%d -> %s\n", i, table_names[i]);
	}

	printf("\nQuantidade de jogos: ");
	scanf("%d", &gamesQtt);

	char teamName1[FULL_STR_SIZE], teamName2[FULL_STR_SIZE];
	int teamScore1, teamScore2;
	int teamIndex1, teamIndex2;


	printf("\nResultados das %d partidas (ex: \"Vascao 1 x 3 Barcelona\"):\n", gamesQtt);
	for (i = 0; i < gamesQtt; i++){
		scanf(" %s %d x %d %s", teamName1, &teamScore1, &teamScore2, teamName2);

		/* finding team ids */
		teamIndex1 = NULL_INDEX;
		teamIndex2 = NULL_INDEX;
		for (j = 0; j < TEAMS_QTT; j++){
			if (strAreEquals(teamName1, table_names[j], table_names_sizes[j]))
				teamIndex1 = j;
			if (strAreEquals(teamName2, table_names[j], table_names_sizes[j]))
				teamIndex2 = j;
			if ((teamIndex1 != NULL_INDEX) && (teamIndex2 != NULL_INDEX))
				break;
		}

		printf("(Procurando times... ");
		if ((teamIndex1 == NULL_INDEX) && (teamIndex2 == NULL_INDEX)) return OS_ERROR_CODE;

		printf("Processando... ");
		/* now processing data table (so: high writing cost, but low reading cost) */
		table_data[teamIndex1][COL_GOALS_SCORED]   += (float) teamScore1;
		table_data[teamIndex1][COL_GOALS_TAKEN]    += (float) teamScore2;
		table_data[teamIndex1][COL_VICTORIES]      += (teamScore1 > teamScore2) ? 1.0 : 0.0;
		table_data[teamIndex1][COL_POINTS]         += points(teamScore1, teamScore2);
		table_data[teamIndex1][COL_GOALS_BALANCES] += (float) (teamScore1 - teamScore2);
		table_data[teamIndex1][COL_GOALS_AVERAGES]  = average(table_data[teamIndex1][COL_GOALS_SCORED], table_data[teamIndex1][COL_GOALS_TAKEN]);

		table_data[teamIndex2][COL_GOALS_SCORED]   += (float) teamScore2;
		table_data[teamIndex2][COL_GOALS_TAKEN]    += (float) teamScore1;
		table_data[teamIndex2][COL_VICTORIES]      += (teamScore2 > teamScore1) ? 1.0 : 0.0;
		table_data[teamIndex2][COL_POINTS]         += points(teamScore2, teamScore1);
		table_data[teamIndex2][COL_GOALS_BALANCES] += (float) (teamScore2 - teamScore1);
		table_data[teamIndex2][COL_GOALS_AVERAGES]  = average(table_data[teamIndex2][COL_GOALS_SCORED], table_data[teamIndex2][COL_GOALS_TAKEN]);

		printf("Pronto.)\n");

		/* order by points, and then by goals balance, and then by alphabetical order */
		/* TODO */

	}

	printf("\n(Imprimindo...)\n");
	for (i = 0; i < TEAMS_QTT; i++){
		printf("%d: %s\n", i, table_names[i]);
	}
	printf("(Pronto.)\n");

	return 0;
}
