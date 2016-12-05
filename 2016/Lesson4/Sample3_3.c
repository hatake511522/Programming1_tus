//学籍番号：4616072 氏名：畑　洋樹
#include<stdio.h>
int main(void){

    double num1,num2;

    printf("小数num1を入力してください。\n");
    scanf("%lf",&num1);

    printf("小数num2を入力してください。\n");
    scanf("%lf",&num2);

    printf("和は%lfとなる。\n",num1+num2);
    printf("差は%lfとなる。\n",num1-num2);
    printf("積は%lfとなる。\n",num1*num2);
    if( num2 == 0){
	printf("商なし。\n");//分母が0だと割ることができない。
    }
    else{
	printf("商は%lfとなる。\n",num1/num2);//分母が0以外の時は割り算を実行させる。
    }
    return 0;
}
