#include <stdio.h>
 
int main(){
 
	int matrix1[16] = {5, 7, 8, 10, 9, 3, 0, 6, 8, 1, 9, 2, 4, 7, 2, 1};
	int matrix2[16] = {2, 2, 1, 3, 8, 1, 3, 1, 1, 2, 2, 4, 3, 1, 1, 2};
 
	int i;
	for(i = 0; i <= 15; i++) {
 
		printf("%d  ", matrix1[i] + matrix2[i]);
 
	}
 
 
	return 0;
}