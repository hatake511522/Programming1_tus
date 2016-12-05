#include<stdio.h>

int quardratic(int x){
    return x*x;
}
int cubic(int x){
    return x*x*x;
}
int biquardratic(int x){
    return x*x*x*x;
}

int main(void){
    int x;
    printf("整数を入力してください。\n");
    scanf("%d",&x);
    printf("%dの2乗は%d,3乗は%d,4乗は%dです。\n",x,quardratic(x),cubic(x),biquardratic(x));

    return 0;
}
