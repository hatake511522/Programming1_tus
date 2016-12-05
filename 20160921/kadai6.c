#include<stdio.h>
int main(void){
    int num1;
    char data;
    double num2;
    
    printf("整数を入力してください。\n");
    scanf(" %d",&num1);

    printf("アルファベットか数字を1文字入力してください。\n");
    scanf(" %c",&data);

    printf("小数を入力してください。\n");
    scanf(" %lf",&num2);

    printf("入力された情報：\n %d\n %c\n %lf\n",num1,data,num2);
    return 0;
}
