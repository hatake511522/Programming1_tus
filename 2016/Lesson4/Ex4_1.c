#include<stdio.h>
int main(void){
    double num;
    printf("小数を入力してください。");
    scanf("%lf",&num);
    
    printf("正負を反転すると%fです。",num*(-1));

    return 0;
}
