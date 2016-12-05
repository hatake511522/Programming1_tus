#include<stdio.h>
int main(void){
    int num1,num2;
    printf("大小比較したい2つの整数を入力してください。\n");
    scanf("%d%d",&num1,&num2);
    
    if( num1 > num2){
	printf("%dは%dよりも大きいです。\n",num1,num2);
    }
    else if( num1 == num2){
	printf("%dと%dは等しいです。\n",num1,num2);
    }
    else{
	printf("%dは%dよりも大きいです。\n",num2,num1);
    }



    return 0;
}
