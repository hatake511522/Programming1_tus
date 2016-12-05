#include<stdio.h>
int main(void){
    int num1,num2;
    printf("2つの整数を入力してください。\n");
    scanf("%d%d",&num1,&num2);

    if( num1*num2 >= 1){
	printf("%dと%dは同符号です。\n",num1,num2);
    }
    else if( num1*num2 <= -1){
	printf("%dと%dは異符号です。\n",num1,num2);
    }
    else{
	printf("0が入力されました。\n");
    }

    return 0;
}
