#include<stdio.h>
int main(void){
    int num,i,j;
    int ch = 0;

    printf("整数を入力してください。\n");
    scanf("%d",&num);

    i=1;
    while(i<num){
	if(i <= num){
    j=0;
	    while(j<i){
		printf("*");
    j++;
	    }
	    printf("\n");
	}
	else{
    j=i-1;
	    while(j>=1){
		printf("*");
    j--;
	    }
	    printf("\n");
	}
  i++;
    }


    return 0;
}
