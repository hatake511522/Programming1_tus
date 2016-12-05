#include<stdio.h>
int main(void){
    int num,i,j;

    printf("整数を入力してください。\n");
    scanf("%d",&num);

    for(i=num; i>=1; i--){
	for(j=i; j>=1; j--){
	   printf("*");
	}
	printf("\n");
    }

    return 0;
}
