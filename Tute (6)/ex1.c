#include <stdio.h>

double circleArea(double radius){
	const double pi = 22.0/7;
	return pi * radius * radius;
}
int main(){
	double radius;
	
	printf("Enter the radius : \n");
	scanf("%lf", &radius);
	
	printf("Area : %.2lf\n", circleArea(radius));
	return 0;
}