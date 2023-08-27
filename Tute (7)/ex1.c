#include <stdio.h>

int  qualityPoints(double avarage);

int main(){
	
	printf("Q Points : %d", qualityPoints(80));
	
	return 0;
}

int  qualityPoints(double avarage){
	if(avarage >= 90 && avarage <= 100){
		return 4;
	}else if(avarage >= 80 && avarage <= 89){
		return 3;
	}else if(avarage >= 70 && avarage <= 79){
		return 2;
	}else if(avarage >= 60 && avarage <= 69){
		return 1;
	}else{
		return 0;
	}
	
}