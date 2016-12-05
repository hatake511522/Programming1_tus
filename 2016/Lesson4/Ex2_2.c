#include<stdio.h>
int main(void){

    int num;
    printf("立方体の辺の長さを入力してください。\n");
    scanf("%d",&num);
    printf("立方体の体積は%dです。",num*num*num);

    return 0;
}
