#include <stdio.h>

int main (){
	
	double output;
	
	double one;
	printf("Enter First Number\n");
	scanf("%lf", &one);
	
	char op;
	printf("[+] Sum [-] Sub [*] Mul [/] Div\n");
	scanf(" %c", &op);
	
	double two;
	printf("Enter Secound Number\n");
	scanf("%lf", &two);
	
	switch(op){
		case '+':
			output = one + two;
			break;
		case '-':
			output = one - two;
			break;
		case '*':
			output = one * two;
			break;
		case '/':
			
			if(two == 0){
			printf("Error : Devided by 0\n");
			return 1;
			}else{
			output = one / two;	
			}
			
		default:
			printf("Wrong Operator !");
		    return 1;
		 					
	}

	printf ("output : %.2lf", output);
	
	return 0;
}