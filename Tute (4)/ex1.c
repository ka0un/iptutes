#include <stdio.h>

int main (){
	
	int num;
	printf("Enter a Number : \n");
	scanf("%d", &num);
	
	if (num > 0){
		printf("%d", num);
	}else{
		printf("%d", num * -1);
	}
	
	return 0;
}