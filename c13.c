#include <stdio.h>

int main(){
	float start, difference, result;
	int number;
	printf("Enter first member ");
	scanf("%f", &start);
	printf("Enter difference ");
	scanf("%f", &difference);
	printf("Enter desired member ");
	scanf("%d", &number);
	result = start + (number-1)*difference;
	printf("Result %f\n", result);
	getch();
	return 0;
}
	