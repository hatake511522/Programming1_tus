#include<stdio.h>
int main(void){
    int num1,num2,num3,num4,num5;
    
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

    int sum = num1+num2+num3+num4+num5;

    printf("5科目の合計点は%dです。\n",sum);
    printf("5科目の平均点は%dです。\n",sum/5);

    return 0;
}
