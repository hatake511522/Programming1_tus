#include<stdio.h>
int main(void){
    
    int test[10];
    int i;
    int sum,min,max;
    double ave;

    //初期化
    sum=0;
    min=0;
    max=0;
    ave=0;

    printf("10人分のテストの点数を入力してください。\n");
    for(i=0; i<10; i++){
	scanf("%d",&test[i]);
    }

    for(i=0; i<10; i++){
	sum+=test[i];
    }//forを利用して楽に合計をだす。
    
    ave = (double)sum/(double)10;//sumと10をdouble型にしておいてエラーを防ぐ。
    
    min=test[0];//minを配列化する。
    for(i=0; i<10; i++){
	if(test[0]>test[i]){
	    min=test[i];
	}    
    }

    max=test[0];//maxを配列化する。
    for(i=0; i<10; i++){
	if(test[0]<test[i]){
	    max=test[i];
	}
    }

    printf("%d\n",sum);
    printf("%f\n",ave);
    printf("%d\n",min);
    printf("%d\n",max);

}
