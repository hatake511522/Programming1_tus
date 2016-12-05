#include<stdio.h>
int main(void){
    int num,i,multi;

    multi =1;

    printf("数値を入力してください。\n");
    scanf("%d",&num);

    i=1;
    while(i<=num){
	     multi *= i;
       i++;
    }

    printf("1から%dまでの階乗した値は%dです。\n",num,multi);
    return 0;
}
