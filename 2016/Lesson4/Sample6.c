#include<stdio.h>
int main(void){
    int sum = 0;
    int num = 0;

    printf("一番目の整数を入力してください。\n");
    scanf("%d",&num);
    sum += num;

    printf("二番目の整数を入力してください。\n");
    scanf("%d",&num);
    sum += num;

    printf("三番目の整数を入力してください。\n");
    scanf("%d",&num);
    sum += num;

    printf("三つの数の合計は%dです。",sum);

    return 0;
}
