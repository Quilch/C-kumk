#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
	int i,n,tmp;
	int sum = 0;
	int min = INT_MAX;
	int max = INT_MIN;
	FILE *f = fopen ("randnum.txt", "r");
	fscanf(f, "%d", &n);
	for (i=0;i<n;i++){
		fscanf(f, "%d", &tmp);
		if (min > tmp){
			min = tmp;
		}
		if (max < tmp){
			max = tmp;
		}
		sum += tmp;
	}
	printf("sum %d, min %d, max %d\n", sum, min, max);
	fclose(f);
	return 0;
}