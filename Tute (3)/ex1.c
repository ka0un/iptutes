#include <stdio.h>

double getDiameter(double radius){
	return radius * 2;
}

double getCircumference(double radius){
	const double pi = 22.0/7;
	return radius * 2 * pi;
}

double getArea(double radius){
	const double pi = 22.0/7;
	return pi * radius * radius;
}

int main (){
	
	printf("Enter the radius : \n");
	double radius;
	scanf("%lf", &radius);
	
	printf("Diameter : %.2lf\n", getDiameter(radius));
	printf("Circumference : %.2lf\n", getCircumference(radius));
	printf("Area : %.2lf\n", getArea(radius));
	
	return 0;
}