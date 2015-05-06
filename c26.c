#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c,x1,x2;
	printf("a? ", a);
	scanf("%lf", &a);
	printf("b? ", b);
	scanf("%lf", &b);
	printf("c? ", c);
	scanf("%lf", &c);
	roots(a, b, c, &x1, &x2);
	printf("roots %f, %f", x1, x2);
	getch();
	return 0;
}
void roots(double a, double b, double c, double *x1, double *x2){
	double d = sqrt((b*b)-(4*a*c));
	*x1 =(-b+d)/(2*a);
	if (d != 0){
		*x2 = (-b-d)/(2*a);
	}
	return;
}
