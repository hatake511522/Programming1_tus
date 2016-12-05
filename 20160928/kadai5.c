#include<stdio.h>
int main(void){

    int num;

    printf("整数を入力してください。\n");
    scanf("%d",&num);

    printf("一桁目の値は%dです。",num%10);

    return 0;
}
