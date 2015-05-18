#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *changeStringSize(char *str,int len);

int main()
{
	int length, i;
	char *str;
	char *new_str;
	printf ("I WANT YOUR STR\n");
	gets(str);
	printf("I WANT YOUR LEN\n");
	scanf("%d", &length);
	new_str = changeStringSize(str, length);
	printf("%s\n", new_str);
	free(str);
	free(new_str);
	return 0;
}

char *changeStringSize(char *str,int len){
	int i=0;
	int max =0;
	char *new_str;
	new_str = (char *)malloc(len*sizeof(char));
	while (str[i] !=0 && i<len){
		new_str[i] = str[i];
		i++;
	}
	max = i;
	for (i=0; i<len-max;i++){
		new_str[i+max]='*';
	}
	new_str[i+max] = 0;
	return new_str;
}
