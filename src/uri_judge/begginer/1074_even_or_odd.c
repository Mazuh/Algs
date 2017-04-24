/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1074
*/

#include <stdio.h>

int main(){

	int qtt;
	int num;

	scanf("%d", &qtt);

    int i;
	for(i = 0; i < qtt; i++){
        scanf("%d", &num);
        if(num){
            if(num % 2)
                printf("ODD ");
            else
                printf("EVEN ");

            if(num > 0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");

        } else{
            printf("NULL\n");
        }
	}

	return 0;
}
