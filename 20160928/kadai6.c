#include<stdio.h>
int main(void){

    double x = 10, y = 5;
    x = x/y; //除算代入演算子を利用
    printf("x = %f\n",x);

    x = x*y; //乗算代入演算子を利用
    printf("x = %f\n",x);

    x = x+y; //加算代入演算子を利用
    printf("x = %f\n",x);

    return 0;
}
