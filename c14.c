#include <stdio.h>

int main(){
	float radius, angle, area, length;
	const double PI = 3.14159265359;
	printf("radius?  ");
	scanf("%f", &radius);
	printf("angle? ");
	scanf("%f", &angle);
	area = PI * radius * radius * (angle/360);
	length = PI*radius*(angle/180);
	printf("Area is : %f, length is %f\n",area,length);
	getch();
	return 0;
}