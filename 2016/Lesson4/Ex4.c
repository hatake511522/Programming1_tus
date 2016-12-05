#include<stdio.h>
int main(void){
    int num;
    printf("整数を入力してください。");
    scanf("%d",&num);
    
    printf("正負を反転すると%dです。",num*(-1));

    return 0;
}
