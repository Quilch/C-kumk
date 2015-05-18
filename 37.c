#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *code(char *str);
char *decode(char *str);

int main(){
	int length, i;
	char *str;
	char *coded_str;
	char *decoded_str;
	srand(time(0));
	printf ("I WANT TO CODE YOUR STR\n");
	gets(str);
	coded_str = code(str);
	printf("coded str\n%s\n",coded_str);
	decoded_str = decode(coded_str);
	printf("decoded str\n%s\n", decoded_str);
	return 0;
}

char *code(char *str){
	char *coded_str;
	int len = 0;
	int i = 0;
	int j = 0;
	while(str[i] !=0){
		len++;
		i++;
	}
	i = 0;
	coded_str = (char *)malloc((len*3-2)*sizeof(char));
	while(str[j+1] !=0){
		coded_str[i]=str[j];
		i++;
		coded_str[i] = (char)(rand()% (127-32+1));
		i++;
		coded_str[i] =(char)(rand()% (127-32+1));
		i++;
		j++;
	}
	coded_str[i]=str[j];
	coded_str[i+1]=0;
	return coded_str;
}
char *decode(char *str){
	int i =0;
	int len = 0;
	int j = 0;
	char *decoded_str;
	while(str[i] !=0){
		len++;
		i++;
	}
	decoded_str =(char *)malloc((len/3+1)*sizeof(char));
	for (i=0; i<len; i++){
		if (i % 3 == 0){
			decoded_str[j]=str[i];
			j++;
		}
	}
	decoded_str[j]=0;
	return decoded_str;
}