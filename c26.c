#include <stdio.h>
#include <math.h>

int main(){
	int roots_amount;
	double a,b,c,x1,x2;
	printf("a? ", a);
	scanf("%lf", &a);
	printf("b? ", b);
	scanf("%lf", &b);
	printf("c? ", c);
	scanf("%lf", &c);
	roots_amount = roots(a, b, c, &x1, &x2);
	printf("roots %f, %f, roots amount: %d", x1, x2, roots_amount);
	getch();
	return 0;
}
int roots(double a, double b, double c, double *x1, double *x2){
	double d = (b*b)-(4*a*c);
	if (d>=0){
		*x1 =(-b+sqrt(d))/(2*a);
		if (d != 0){
			*x2 = (-b-sqrt(d))/(2*a);
			return 2;
		}
		else{
			return 1;
		}
	}
	else{
		return 0;
	}

}
