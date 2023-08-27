#include <stdio.h>

int main(){
	
	for (int i = 1; i <= 7; i++){
		for (int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	for (int i = 1; i <= 8; i++){
		for (int j = 7; j >= i; j--){
			printf("*");
		}
		printf("\n");
		i++;
	}

	return 0;
}