#include <stdio.h>

int add(int one, int two);

int multiply(int one, int two);

int square(int num);

int main(){
	
	printf("Answer : %d", square(add(multiply(3, 4), multiply(5, 7))));
	
	return 0;
}

int add(int one, int two){
	return one + two;
}

int multiply(int one, int two){
	return one * two;
}

int square(int num){
	return num * num;
}