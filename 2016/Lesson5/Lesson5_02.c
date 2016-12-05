#include<stdio.h>
int main(void){

    int num;
    printf("整数を入力してください。\n");
    scanf("%d",&num);

    if( num == 2){
	printf("2が入力されました。\n");
    }

    else{
	printf("2以外が入力されました。\n");
    }
    return 0;
}
	
