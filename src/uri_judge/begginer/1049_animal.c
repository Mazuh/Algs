/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1049
*/

#include <stdio.h>
#include <string.h>

int main(){

	char id1[20], id2[20], id3[20];
	scanf("%19s %19s %19s", id1, id2, id3);

	if (!strcmp("vertebrado", id1)){
		if (!strcmp("ave", id2)){
			if (!strcmp("carnivoro", id3)){
				printf("aguia\n");
			} else if (!strcmp("onivoro", id3)){
				printf("pomba\n");
			}

		} else if (!strcmp("mamifero", id2)){
			if (!strcmp("onivoro", id3)){
				printf("homem\n");
			} else if (!strcmp("herbivoro", id3)){
				printf("vaca\n");
			}
		}

	} else if (!strcmp("invertebrado", id1)){
		if (!strcmp("inseto", id2)){
			if (!strcmp("hematofago", id3)){
				printf("pulga\n");
			} else if (!strcmp("herbivoro", id3)){
				printf("lagarta\n");
			}

		} else if (!strcmp("anelideo", id2)){
			if (!strcmp("hematofago", id3)){
				printf("sanguessuga\n");
			} else if (!strcmp("onivoro", id3)){
				printf("minhoca\n");
			}
		}
	}

	return 0;
}
