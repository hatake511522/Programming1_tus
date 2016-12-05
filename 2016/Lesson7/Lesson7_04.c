#include<stdio.h>
int main(void){
    
    int test[15];
    int i;
    int sum,min,max;
    double ave;

    //初期化
    sum=0;
    min=0;
    max=0;
    ave=0;

    printf("15人分のテストの点数を入力してください。(10点刻みで0~100点)\n");
    for(i=0; i<10; i++){
	scanf("%d",&test[i]);
    }

    for(i=0; i<10; i++){
	sum+=test[i];
    }//forを利用して楽に合計をだす。
    
    ave = (double)sum/(double)15;//sumと15をdouble型にしておいてエラーを防ぐ。

    printf("%d\n",sum);
    printf("%f\n",ave);

}
