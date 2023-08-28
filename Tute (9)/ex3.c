#include <stdio.h>
 
 
int main(){	
 
	// [salesman][product]
	double arr[4][5] = { { 10.0, 20.0, 30.0, 40.0 , 30.0 }, { 50.0, 60.0, 70.0, 80.0 , 80.0 }, { 90.0, 100.0, 110.0, 120.0 , 50.0 }, { 130.0, 140.0, 150.0, 160.0 , 10.0}, { 170.0, 180.0, 190.0, 200.0 , 20.0}, };
 
	int i, j;
 
	for (i = 0; i <= 3; i++){
		printf("Salesman Number 0%d\n", i + 1);
		for (j = 0; j <= 4; j++){
			printf("Product 0%d price : %.2lf\n", j + 1, arr[i][j]);
		}
	}
 
	return 0;
}