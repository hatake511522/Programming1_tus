#include<stdio.h>

int main(void)
{
    double test[3] ={80,60,55};

    printf("test[0]の値は%fです。\n",test[0]);
    printf("test[0]のアドレスは%pです。\n",&test[0]);
    printf("test[1]の値は%fです。\n",test[1]);
    printf("test[1]のアドレスは%pです。\n",&test[1]);
    printf("test[2]の値は%fです。\n",test[2]);
    printf("test[2]のアドレスは%pです。\n",&test[2]);

    return 0;
}
