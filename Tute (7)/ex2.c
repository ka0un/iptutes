#include <stdio.h>
#include <math.h>


double hypotenuse(double side1, double side2);
void testHypotenuse();

int main(){
	testHypotenuse();
	return 0;
}

double hypotenuse(double side1, double side2){
	return sqrt(side1*side1 + side2 * side2);
}

void testHypotenuse(){
	printf("%.2lf\n", hypotenuse(3.0,4.0));
	printf("%.2lf\n", hypotenuse(5.0,12.0));
	printf("%.2lf\n", hypotenuse(8.0,15.0));
}