#include<stdio.h>
int main(void){
    int height,bottom;
    printf("三角形の高さを入力してください。\n");
    scanf("%d",&height);

    printf("三角形の底辺を入力してください。\n");
    scanf("%d",&bottom);


    double dnum;
    dnum = ((double)height*(double)bottom)/2;

    printf("三角形の面積は%fです。\n",dnum);

    return 0;
}
