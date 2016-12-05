#include<stdio.h>
int main(void){
    int num,sum;
    int i;

    num = 0;
    sum = 0;

    printf("変数宣言をしただけではその変数の中身は定まっていない。\nのでその変数を使う時には何らかの値をいれておかなければならない。\n");

    printf("いくつまでの合計を求めますか？\n");
    scanf("%d",&num);
    i=0;
    do{
	     sum += i;
       i++;
    }
    while(i<=num);

    printf("1から%dまでの合計値は%dです。\n",num,sum);
    return 0;
}
