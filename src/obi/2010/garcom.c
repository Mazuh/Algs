/**
http://olimpiada.ic.unicamp.br/pratique/programacao/nivelj/2010f1pj_garcom
*/

#include <stdio.h>

int main(){
	
	int trayQtt;
	
	scanf("%d", &trayQtt);
	
	int canesPerTray, cupsPerTray;
	
	int brokenCups = 0;
	
	int i;
	for (i = 0; i < trayQtt; i++){
		
		scanf("%d %d", &canesPerTray, &cupsPerTray);
		if (canesPerTray > cupsPerTray)
			brokenCups += cupsPerTray;
		
	}
	
	printf("%d\n", brokenCups);
	
	return 0;
}
