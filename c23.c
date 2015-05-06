#include <stdio.h>

int main(){
	int n, n1, n2, temp;
	printf("n? ");
	scanf("%d", &n);
	n1 = 0;
	printf("%d ", n1);
	n2 = 1;
	while (n1<n){
		temp = n2;
		n2 += n1;
		n1 = temp;
		printf("%d ", n1 ); 
	}
	getch();
	return 0;
}
