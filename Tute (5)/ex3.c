#include <stdio.h>

int main(){
	
	int i = 1;
	int j = 1;
	double total = 0.0;
 	double highestmarks = 0.0;
	int higheststudent;
	
	
	while(j <= 3){
		
		printf("Enter the marks for student %d : \n", j);
		
		while(i <= 4){
			double input;
     		printf("Modue %d marks : ", i);
			scanf("%lf", &input);
			total = total + input;
			i++;
		}
	
		printf("\nStudent %d Total marks : %.2lf\n\n",j ,total);
		
		if(highestmarks < total){
			highestmarks = total;
			higheststudent = j;
		}
		
		i = 1;
		j++;
	}
	
	printf("Student %d has highest mark of %.2lf\n", higheststudent, highestmarks);
	

	
	
	return 0;
}

