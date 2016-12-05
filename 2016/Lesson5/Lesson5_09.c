#include<stdio.h>
int main(void){
    int res;
    
    printf("何番目を選びますか？\n");
    printf("整数を入力してください。\n");
    
    scanf("%d",&res);

    if( res == 1){
	printf("Aコースを選択しました。\n");
    }
    else{
	printf("Bコースを選択しました。\n");
    }
    
    return 0;
}
