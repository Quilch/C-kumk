#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,guess,i;
	a = rand() % 100000;
	i = 1;
	printf("Cheats : %d\n",a);
	while(i){
		printf("Your guess ? ");
		scanf("%d", &guess);
		if (guess == a){
			i = 0;
		}
		else {
			if (a > guess){
				printf("my number is bigger \n");
				}
				else{
					printf("my number is lower \n");
				}
		}
	}
	printf("you won!");
	getch();
	return 0;
}