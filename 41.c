#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *GenArray (int n, int a, int b);

int main(){
	int a,b,n,i;
	int *ar = NULL;
	FILE *file = fopen ("randnum.txt", "w");
	printf("a? b? n? ");
	scanf("%d %d %d", &a, &b, &n);
	fprintf (file, "%d\n", n);
	ar = GenArray(n,a,b);
	for (i = 0; i < n; i++){
		fprintf(file, "%d ", ar[i]);
	}
	fprintf(file, "\n");
	free(ar);
	fclose(file);
	return 0;
}

int *GenArray (int n, int a, int b){
	int i;
	int *ar = NULL;
	srand(time(0));
	ar = (int *)malloc(n*sizeof(int));
	for (i=0;i<n;i++){
		ar[i]= a + (rand()% (b-a+1));		
	}
	return ar;
}