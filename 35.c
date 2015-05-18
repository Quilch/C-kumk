#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Str2Int(char *str);

int main()
{
	int i;
	char *str;
	printf ("I WANT YOUR STR\n");
	gets(str);
	i = Str2Int(str);
	printf("%d\n", i);
	free(str);
	return 0;
}

int Str2Int(char *str){
	int i=0;
	int num=0;
	while((((int)str[i])-48)<=9 
		&& (((int)str[i])-48)>=0)
	{
		num = num*10+(((int)str[i])-48);
		i++;

	}
	return num;
}