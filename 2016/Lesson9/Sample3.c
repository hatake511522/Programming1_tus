#include<stdio.h>
int main(void){
    int a=8;
    int *pa;
    double b=-2.2;
    double *px;
    
    pa=&a;
    pa=&b;

    printf("変数aの値は%dです。\n",a);
    printf("変数aのアドレスは%pです。\n",&a);
    printf("ポインタpaの値は%pです。\n",pa);
    printf("*paの値は%dです。\n",*pa);

    printf("変数bの値は%dです。\n",b);
    printf("変数bのアドレスは%pです。\n",&b);
    printf("ポインタpbの値は%pです。\n",pb);
    printf("*pbの値は%dです。\n",*pb);

    return 0;
}
