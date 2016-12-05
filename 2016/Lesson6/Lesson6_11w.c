#include<stdio.h>
int main(void){
    int num,i,j;

    printf("整数を入力してください。\n");
    scanf("%d",&num);

    i=num;
    while(i>=1){
      j=num;
	while(j>=1){
	    printf("%d ",i*j);
      j--;
	}
	printf("\n");
  i--;
    }

    return 0;
}
