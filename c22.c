#include <stdio.h>

int main(){
	int a,b,gcd,lcm;
	printf("a? ");
	scanf("%d", &a);
	printf("b? ");
	scanf("%d", &b);
	lcm = abs(a*b);
	gcd = a;
	while(b){
			gcd = b;
			b = a % b;
			a = gcd;
		}
	lcm = lcm / gcd;
	printf("gcd %d, lcm %d", gcd, lcm);
	getch();
	return 0;
}
