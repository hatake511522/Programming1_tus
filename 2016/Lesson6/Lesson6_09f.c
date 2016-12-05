#include<stdio.h>
int main(void){
    int num,i,j;
    int ch = 0;

    printf("整数を入力してください。\n");
    scanf("%d",&num);

    for(i=1; i<num; i++){
	if(i <= num){
	    for(j=0; j<i; j++){
		printf("*");
	    }
	    printf("\n");
	}
	else{
	    for(j=i-1; j>=1; j--){
		printf("*");
	    }
	    printf("\n");
	}
    }
    

    return 0;
}
