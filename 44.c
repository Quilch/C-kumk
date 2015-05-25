#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct TIME
{
	int hours, minutes, seconds;
};

typedef struct TIME Time;

void PrintTime (Time time){
	printf("%d:%d:%d\n", time.hours, time.minutes, time.seconds);
}

Time IncTime (Time time, int seconds){
	time.hours = (time.hours + (seconds / 3600)) % 24;
	time.minutes = (time.minutes + ((seconds % 3600) / 60)) % 60;
	time.seconds = time.seconds + (seconds % 3600) % 60;
	return time;
}

int CmpTime (Time time1, Time time2){
	if (time1.hours > time2.hours){
		return 1;
	}
	if(time1.hours < time2.hours){
		return -1;
	}
	if (time1.minutes > time2.minutes){
		return 1;
	}
	if (time1.minutes < time2.minutes){
		return -1;
	}
	if (time1.seconds > time2.seconds){
		return 1;
	}
	if (time1.seconds < time2.seconds){
		return -1;
	}
	return 0;
}


void SwapTime (Time *time1, Time *time2){
	int tmphours = time1->hours;
	int tmpmins = time1->minutes;
	int tmpsec = time1->seconds;
	*time1 = *time2;
	time2->hours = tmphours;
	time2->minutes = tmpmins;
	time2->seconds = tmpsec;
}

int main()
{
	Time t1, t2;
	int r;
	srand(time(0));
	t1.hours = rand() % 24;
	t1.minutes = rand() % 60;
	t1.seconds = rand() % 60;
	printf("random time:\n");
	PrintTime(t1);
	r = rand();
	printf("inc : %d\n", r);
	t2 = IncTime(t1, r);
	printf("inced time:\n");
	PrintTime(t2);
	r = CmpTime(t1, t2);
	printf("compare : %d\n", r);
	SwapTime(&t1, &t2);
	printf("swap:\n");
	PrintTime(t1);
	PrintTime(t2);
	return 0;
}