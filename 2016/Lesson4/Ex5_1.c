#include<stdio.h>
int main(void){
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
    
    printf("科目1の点数を入力してください。\n");
    scanf("%d",&num1);

    printf("科目2の点数を入力してください。\n");
    scanf("%d",&num2);

    printf("科目3の点数を入力してください。\n");
    scanf("%d",&num3);

    printf("科目4の点数を入力してください。\n");
    scanf("%d",&num4);

    printf("科目5の点数を入力してください。\n");
    scanf("%d",&num5);

    printf("科目6の点数を入力してください。\n");
    scanf("%d",&num6);

    printf("科目7の点数を入力してください。\n");
    scanf("%d",&num7);

    printf("科目8の点数を入力してください。\n");
    scanf("%d",&num8);

    printf("科目9の点数を入力してください。\n");
    scanf("%d",&num9);

    printf("科目10の点数を入力してください。\n");
    scanf("%d",&num10);

    int sum = num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;

    printf("10科目の合計点は%dです。\n",sum);
    printf("10科目の平均点は%dです。\n",sum/10);

    return 0;
}
