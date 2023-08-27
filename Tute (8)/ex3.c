#include <stdio.h>

int main(){
	
	int Motion[5] = {};
	
	for (int i = 1; i <= 5;i++){
		int in;
		printf("Enter a Number: ");
		scanf("%d", &in);
		Motion[i-1] = in;
	}
	printf("\nInitial Values \n");
	
	for (int i = 1; i <= 5;i++){
		printf("%d\t", Motion[i-1]);
	}
	printf("\n");
	
	printf("\nAfter Rotating \n");
	
	int out[5] = {};
	for (int i = 1; i <= 5;i++){
		if(i != 1){
			out[4] = Motion[0];
		}else{
			out[i-2] = Motion[i-1];
		}
		out[i-2] = Motion[i-1];
	}
	
	for (int i = 1; i <= 5;i++){
		printf("%d\t",out[i-1]);
	}
	printf("\n");
	
	return 0;
}