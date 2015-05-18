#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *GenArray (int n, int a, int b);
int *ReverseArray(int *ar, int len);

int main(){
	int a,b,n,i;
	int *ar = NULL;
	printf("a? b? n? ");
	scanf("%d %d %d", &a, &b, &n);
	ar = GenArray(n,a,b);
	for (i = 0; i < n; i++){
		printf("%d ", ar[i]);
	}
	printf("\n");
	ar = ReverseArray(ar, n);
	for (i = 0; i < n; i++){
		printf("%d ", ar[i]);
	}
	free(ar);
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

int *ReverseArray(int *ar, int len){
	int tmp,i;
	for(i=0;i<(len / 2);i++){
		tmp = ar[i];
		ar[i] = ar[len-i-1];
		ar[len-i-1] = tmp;
	}
	return ar;
}