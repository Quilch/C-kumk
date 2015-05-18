#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned char *GenArray (int n, int a, int b);
unsigned char *sorting(unsigned char *ar,int len);

int main(){
	int a,b,n,i;
	unsigned char *ar = NULL;
	a = 1;
	b = 3;
	printf("n? ");
	scanf("%d", &n);
	ar = GenArray(n,a,b);
	for (i = 0; i < n; i++){
		printf("%d ", ar[i]);
	}
	printf("\n");
	sorting(ar, n);
	for (i = 0; i < n; i++){
		printf("%d ", ar[i]);
	}
	free(ar);
	return 0;
}
unsigned char *GenArray (int n, int a, int b){
	int i;
	unsigned char *ar = NULL;
	srand(time(0));
	ar = (unsigned char *)malloc(n*sizeof(unsigned char));
	for (i=0;i<n;i++){
		ar[i]= a + (rand()% (b-a+1));		
	}
	return ar;
}

unsigned char *sorting(unsigned char *ar,int len){
	int i,ones,twos,thrs;
	ones = 0;
	twos = 0;
	thrs = 0;
	for(i=0; i<len;i++){
		if(ar[i]==1){
			ones++;
		}
		else{
			if (ar[i]==2){
				twos++;
			}
			else{
				thrs++;
			}
		}
	}
	for (i=0;i<ones;i++){
		ar[i] = 1;
	}
	for (i=0;i<twos;i++){
		ar[i+ones] = 2;
	}
	for (i=0;i<thrs;i++){
		ar[i+twos+ones] = 3;
	}
	return ar;
}