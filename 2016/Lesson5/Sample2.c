#include<stdio.h>
int main(void){

    int res;
    printf("整数を入力してください。\n");
    scanf("%d",&res);
    
    if( res == 1 ){
	printf("1が入力されました。\n");
	printf("1を選択しました。\n");
    }

    printf("処理を終了します。\n");
}
