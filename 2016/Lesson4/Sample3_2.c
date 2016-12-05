#include<stdio.h>
int main(void){

    double num1,num2;

    printf("小数num1を入力してください。\n");
    scanf("%lf",&num1);

    printf("小数num2を入力してください。\n");
    scanf("%lf",&num2);

    printf("和は%lfとなる。\n",num1+num2);
    printf("差は%lfとなる。\n",num1-num2);
    printf("積は%lfとなる。\n",num1*num2);
    printf("商は%lfとなる。\n",num1/num2);

    return 0;
}
