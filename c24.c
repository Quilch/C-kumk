#include <stdio.h>

int main(){
	int m, n;
	double a,b, difference;
	printf("m? ");
	scanf("%d", &m);
	printf("n? ");
	scanf("%d", &n);
	printf("a? ");
	scanf("%lf", &a);
	printf("b? ");
	scanf("%lf", &b);
	difference = (a-b)/(m-n);
	while (a != b){
		printf("%f ", a);
		a += difference;
	}
	printf("%f ", b);
	getch();
	return 0;
}
