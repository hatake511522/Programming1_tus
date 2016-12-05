#include<stdio.h>
int main(void){
    int num,i,j;

    printf("整数を入力してください。\n");
    scanf("%d",&num);
    
    for(i=num; i>=1; i--){
	for(j=num; j>=1; j--){
	    printf("%d ",i*j);
	}
	printf("\n");
    }

    return 0;
}

