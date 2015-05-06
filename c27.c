#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){
  int a,b,n,sum,min,max,tmp;
  printf("a? ", a);
  scanf("%d", &a);
  printf("b? ", b);
  scanf("%d", &b);
  printf("n? ", n);
  scanf("%d", &n);
  srand(time(0));
  sum = 0;
  min = b;
  max = a;
  while (n != 0){
    tmp = a + (rand()% (b-a+1));
    n--;
    sum += tmp;
    if (tmp > max){
      max = tmp;
    }
    if (tmp < min){
      min = tmp;
    }
    printf("%d, ", tmp);
  }
  printf("min %d, max %d, sum %d", min, max, sum);
  getch();
  return 0;
}
