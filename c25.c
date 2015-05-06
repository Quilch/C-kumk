#include <stdio.h>

int main(){
	int a,b,c;
	printf("a? ", a);
	scanf("%d", &a);
	printf("b? ", b);
	scanf("%d", &b);
	printf("c? ", c);
	scanf("%d", &c);
	printf("max %d", Max3(a,b,c));
	getch();
	return 0;
}
int Max3(int a, int b, int c){
	if (a>=b && a>=c){
		return a;
	}
	else{
		if(b>=c && b>=a){
		return b;
	    }
	    else{
	    	return c;
	    }
	}
}
