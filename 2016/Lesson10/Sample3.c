#include<stdio.h>

int main(void)
{
    int test[3] ={80,60,55};

    printf("test[0]の値は%dです。\n",test[0]);
    printf("test[0]のアドレスは%pです。\n",&test[0]);
    printf("test[1]の値は%dです。\n",test[1]);
    printf("test[1]のアドレスは%pです。\n",&test[1]);
    printf("test[2]の値は%dです。\n",test[2]);
    printf("test[2]のアドレスは%pです。\n",&test[2]);
    printf("testの値は%pです。\n",test);
    printf("*testの値は%dです。\n",*test);/*配列の先頭要素*/

    printf("test+1の値は%pです。\n",test+1);
    printf("test+2の値は%pです。\n",test+2);
    printf("*(test+1)の値は%dです。\n",*(test+1));
    printf("*(test+2)の値は%dです。\n",*(test+2));

    return 0;
}
