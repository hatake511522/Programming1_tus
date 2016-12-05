#include<stdio.h>
int main(void){
    double a=1.5,b=2.5,c=3.5;

    printf("変数aの値は%fです。\n",a);
    printf("変数aのアドレスは%pです。\n",&a);

    printf("変数bの値は%fです。\n",b);
    printf("変数bのアドレスは%pです。\n",&b);

    printf("変数cの値は%fです。\n",c);
    printf("変数cのアドレスは%pです。\n",&c);

    return 0;
}
