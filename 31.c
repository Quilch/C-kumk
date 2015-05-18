#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

void MinMaxArray(int *array,int length,int *maximum,int *minimum);

int main(){
	int length, max, min;
	int i = 0;
	int *ar = NULL;
	printf("len? ");
	scanf("%d",&length);
	ar = (int *)malloc(length*sizeof(int));
	srand(time(0));
	for (i = 0; i<length;i++){
		ar[i]=rand();
		printf("%d ",ar[i]);
	}
	printf("\n");
	MinMaxArray(ar, length, &max, &min);
	printf("max %d, min %d", max, min);
	free(ar);
	return 0;
}
void MinMaxArray(int *array,int length,int *maximum,int *minimum){
	int i,max,min;
	max = INT_MIN;
	min = INT_MAX;
	for(i=0; i<length;i++){
		if (array[i]>max){
			max=array[i];
		}
		else{
			if (array[i]<min){
				min=array[i];
			}
		}
	}
	*maximum = max;
	*minimum = min;
	return;
}





