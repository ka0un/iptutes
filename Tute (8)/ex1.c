#include <stdio.h>

double getmean(double *arr);

int main(){
	
	double marks[10]={};
	
	for (int i = 1; i <= 10;i++){
		double mark;
		printf("Enter Student %d marks : ", i);
		scanf("%lf", &mark);
		
		if(mark >= 0 && mark <= 20){
			marks[i-1] = mark;
		}else{
			printf("Invalid Input Try again!\n");
			i--;
		}
	}
	
	printf("\nMarks Of Students\n");

	for (int i = 0; i <= 9; i++){
		printf("%.2lf\n", marks[i]);
	}
	
	printf("Mean : %.2lf", getmean(marks));
	return 0;
}

double getmean(double *arr){
	double sum= 0.0;
	for(int i = 0; i < 10; i++){
		sum = sum + arr[i];
	}
	return sum/10;
}