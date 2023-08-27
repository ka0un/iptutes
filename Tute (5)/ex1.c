#include <stdio.h>

int main (){
	
	for(int i = 10; i <= 20; i++){
		printf("%d\n", i);
	}
	
	/*
	int i;
	do{

		printf ("Enter a number : \n");
		scanf("%d", &i);
		printf ("your number : %d\n", i);
				
	}while(i > 0);
	
	*/
	
	int i;
	int sum = 0;
	int count = 0;
	
	do{

		printf ("Enter a number : \n");
		scanf("%d", &i);
		
		if(i < 0){
			printf("Sum : %d\n", sum);
			printf("Average : %d\n", sum / count);
		}else{
			sum = sum + i;
			count++;
		}
				
	}while(i > 0);
	
	return 0;
}