//学籍番号：4616072　氏名：畑　洋樹
#include<stdio.h>
int main(void){
    double height,weight;
    printf("身長[m]と体重[kg]を入力してください。\n");
    scanf("%lf%lf",&height,&weight);
    
    double height2 = height/(double)100;
    double bmi = weight/(height2*height2);

    printf("身長は%.4f[cm]、体重は%.4f[kg]、BMIは%lfです。\n",height2,weight,bmi);
    
    if( bmi < 18.5){
	printf("あなたは痩せ型です。\n");
    }
    else if( bmi >= 18.5 && bmi < 25){
	printf("あなたは普通体重です。\n");
    }
    else if( bmi >= 25 && bmi < 30){
	printf("あなたは肥満(１度)です。\n");
    }
    else if( bmi >= 30 && bmi < 35){
	printf("あなたは肥満(2度)です。\n");
    }
    else if( bmi >= 35 && bmi < 40){
	printf("あなたは肥満(3度)です。\n");
    }
    else{
	printf("あなたは肥満(4度)です。\n");
    }

    return 0;
}
