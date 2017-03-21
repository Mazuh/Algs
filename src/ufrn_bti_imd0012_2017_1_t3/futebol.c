
#include <stdio.h>

#define TEAMS_QTT 3
#define DATA_COLS_QTT 3

/* COLUMNS ID FOR DATA TABLE */
#define COL_GOALS_SCORED 0
#define COL_GOALS_TAKEN 1
#define COL_VICTORIES 2 /* for each: +1 when goals scored > goals taken */
#define COL_POINTS 3 /* for each: +3 points per victory, +1 point per draw match */
#define COL_GOALS_BALANCES 4 /* for each balance = scored - taken */
#define COL_GOALS_AVERAGES 5 /* for each average = scored / taken (where taken > 0) */

int main(){

	const m

	char table_names[TEAMS_QTT][25] = {"Vascao", "Barcelona", "Milan"};

	float table_data[TEAMS_QTT][6];

	int i, j;

	for (i = 0; i < TEAMS_QTT; i++){
		for(j = 0; j < DATA_COLS_QTT; j++){
			table_data[i][j] = 0;
		}
	}



	return 0;
}