#include<stdio.h>
int main(void){
    double tall;
    float weight;
    int old;
    printf("身長を入力してください。\n");
    scanf(" %lf",&tall);
    printf("体重を入力してください。\n");
    scanf(" %f",&weight);
    printf("年齢を入力してください。\n");
    scanf(" %d",&old);

    printf("結果：\n 身長：%lf\n 体重：%f\n 年齢：%d\n",tall,weight,old);
    return 0;
}
