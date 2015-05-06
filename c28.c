#include <stdio.h>
#include <math.h>

int main(){
	int n, sum, bestnum;
	printf("n? ");
	scanf("%d", &n);
	sum = sumfac(n);
	printf("%d\n", sum);
	bestnum = maxsin(sum);
	printf("%d\n", bestnum);
	printer(bestnum, n);
	getch();
	return 0;
}

int sumfac(int n){
	int sum = 0;
	while(n>0){
		sum =sum + n;
		n--;
	}
	return sum;
}

int maxsin(int n){
	int i;
	double tmp;
	double max = -2;
	while(n>0){
		tmp = sin(n);
		if (tmp > max){
			i = n;
			max = tmp;
		}
		n--;
	}
	return i;
}

void printer(int a, int b){
	while (a != 0){
		if (a-b >= 0){
			printf("%d ", b);
			a -=b;
			b--;
		}
		else{
			b--;
		}
	}

}