#include <stdio.h>

int main (){
	
	double balance;
	printf("Enter The Initial balance\n");
	scanf("%lf", &balance);
	
	char type;
	printf("[D] Deposite [W] Withdraw\n");
	scanf(" %c", &type);
	
	double amount;
	printf("Enter The Amount\n");
	scanf("%lf", &amount);
	
	if(type == 'D' || type == 'd'){
		balance = balance + amount;
	}else if(type == 'W' || type == 'w'){
		balance = balance - amount;
	}else{
		printf("Wrong Input !");
		return 1;
	}
	
	printf ("Balance : %.2lf", balance);
	
	return 0;
}