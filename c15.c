#include <stdio.h>

int main(){
	float number, result;
	printf("number?  ");
	scanf("%f", &number);
	if (number>0){
		printf("abs %f",number);
	}
	else{
		printf("abs %f", -number);
	}
	getch();
	return 0;
}