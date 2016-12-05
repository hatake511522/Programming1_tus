#include<stdio.h>
int main(void){
    int num1,num2,num3;

    printf("整数1を入力してください。\n");
    scanf("%d",&num1);

    printf("整数2を入力してください。\n");
    scanf("%d",&num2);

    printf("整数3を入力してください。\n");
    scanf("%d",&num3);

    printf("足し算の結果は%dです。\n",num1+num2+num3);
    printf("掛け算の結果は%dです。\n",num1*num2*num3);

    return 0;
}
