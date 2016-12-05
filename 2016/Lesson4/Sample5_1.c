#include<stdio.h>
int main(void){

    int a = 0;
    int b = 0;

    b = ++a;

    printf("インクリメント後に代入したのでbの値は%dです。\n",b);

    return 0;
}
