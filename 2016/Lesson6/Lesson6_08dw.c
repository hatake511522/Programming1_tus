#include<stdio.h>
int main(void){
    int num,i,j;

    printf("整数を入力してください。\n");
    scanf("%d",&num);

    i=num;
    do{
      j=i;
    	do{
    	   printf("*");
         j--;
    	}
      while(j>=1);
  	printf("\n");
    i--;
      }
      while(i>=1);

    return 0;
}
