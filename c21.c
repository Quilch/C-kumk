#include <stdio.h>

int main(){
	int year;
	printf("year? ");
	scanf("%d", &year);
	if (year % 4 ==0 && year % 100 != 0 ||year % 400 == 0){
		printf("Leap year\n");
	}
	else{
		printf("Not Leap year\n");
	}
	getch();
	return 0;
}
