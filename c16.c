#include <stdio.h>

int main(){
	float a, result;
	int n;
	printf("a? ");
	scanf("%f", &a);
	printf("n? ");
	scanf("%d", &n);
	result = 1;
	while (n>0){
		result = result*a;
		n--;
	}
	printf("result %f", result);
	getch();
	return 0;
}