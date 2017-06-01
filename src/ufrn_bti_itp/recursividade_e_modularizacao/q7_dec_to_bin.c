#include <stdio.h>

#define ORIGIN_BASE 10
#define TARGET_BASE 2

int bin(int dec){
	if (dec < TARGET_BASE) return dec;
	else return (ORIGIN_BASE * bin(dec/TARGET_BASE)) + (dec % TARGET_BASE);
}

int main(){
	printf("%d\n", bin(10));
	return 0;
}
