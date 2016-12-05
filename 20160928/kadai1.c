#include <stdio.h>
int main(void){

    double num1,num2;

    printf("長方形の長辺の長さを入力してください:\n");
    scanf("%lf",&num1);

    printf("長方形の短辺の長さを入力してください。:\n");
    scanf("%lf",&num2);
    
    printf("長方形の面積は%lfです。\n",num1*num2);

    return 0;
}
