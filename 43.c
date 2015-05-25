#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,n;
	double x0,b0,tmp;
	FILE *f = fopen ("poly.txt", "r");
	fscanf(f, "%lf", &x0);
	fscanf(f, "%d", &n);
	fscanf(f, "%lf", &b0);
	for (i=0; i < n;i++){
		fscanf(f, "%lf", &tmp);
		b0 = tmp + b0*x0;
	}
	printf("%f\n", b0);
	fclose(f);

	return 0;
}