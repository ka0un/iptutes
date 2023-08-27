#include <stdio.h>

int main (){
	double mark1, mark2;
	printf("Enter the Mark 1\n");
	scanf("%lf", &mark1);
	printf("Enter the Mark 2\n");
	scanf("%lf", &mark2);
	
	printf("sum = %.2lf\n", mark1 + mark2);
	printf("avr = %.2lf\n", (mark1 + mark2)/2.0);
	return 0;
}

