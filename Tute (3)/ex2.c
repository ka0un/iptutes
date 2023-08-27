#include <stdio.h>

int main (){
	printf("Enter 5 digit number : \n");
	int num;
	scanf("%d", &num);
	
	int digit5 = num % 10;
	int digit4 = num / 10 % 10;
	int digit3 = num / 100 % 10;
	int digit2 = num / 1000 % 10;
	int digit1 = num / 10000 % 10;
	
	printf("%d\t%d\t%d\t%d\t%d\n", digit1,digit2,digit3,digit4,digit5);
	
	
	return 0;
}