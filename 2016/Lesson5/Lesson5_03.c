#include<stdio.h>
int main(void){

    int num;
    printf("整数を入力してください。\n");
    scanf("%d",&num);

    if( num == 1){
	printf("1が入力されました。\n");
    }

    else if( num == 2){
	printf("2が入力されました。\n");
    }

    else if( num == 3){
	printf("3が入力されました。\n");
    }

    else{
	printf("1か2か3を入力してください。\n");
    }
    return 0;
}
	
