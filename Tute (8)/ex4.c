#include <stdio.h>

void printBar(int num);

int main(){
	
	int arr[10] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
	
	
	printf("Element  value  Histogram\n");
	for (int i = 0; i <=9 ; i++){
		printf("%d\t%d\t", i, arr[i]);
		printBar(arr[i]);
	}
	
	
	return 0;
}

void printBar(int num){
	
	for (int i = 1; i <= num; i++){
		printf("*");
	}
	printf("\n");	
}