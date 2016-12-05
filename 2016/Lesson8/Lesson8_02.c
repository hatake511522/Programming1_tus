#include<stdio.h>

double sum(double x1,double x2,double x3,double x4,double x5){
    return x1+x2+x3+x4+x5;
}
double multi(double x1,double x2,double x3,double x4,double x5){
    return x1*x2*x3*x4*x5;
}
double ave(double x1,double x2,double x3,double x4,double x5){
    return (x1+x2+x3+x4+x5)/5;
}

double meansquare(double x1,double x2,double x3,double x4,double x5){
    return ((x1*x1)+(x2*x2)+(x3*x3)+(x4*x4)+(x5*x5))/5;
}

double dispersion(double x1,double x2,double x3,double x4,double x5){
    return (((x1*x1)+(x2*x2)+(x3*x3)+(x4*x4)+(x5*x5))/5)-((x1*x2*x3*x4*x5)/5);
}

int main(void){
    double num1,num2,num3,num4,num5;
	printf("1番目の数を入力してください。\n");
	scanf("%lf",&num1);
	printf("2目の数を入力してください。\n");
	scanf("%lf",&num2);
	printf("3番目の数を入力してください。\n");
	scanf("%lf",&num3);
	printf("4番目の数を入力してください。\n");
	scanf("%lf",&num4);
	printf("5番目の数を入力してください。\n");
	scanf("%lf",&num5);
    printf("和は%fです。\n",sum(num1,num2,num3,num4,num5));
    printf("積は%fです。\n",multi(num1,num2,num3,num4,num5));
    printf("平均は%fです。\n",ave(num1,num2,num3,num4,num5));
    printf("二乗平均は%fです。\n",meansquare(num1,num2,num3,num4,num5));
    printf("分散は%fです。\n",dispersion(num1,num2,num3,num4,num5));
    
    printf("\n");

    return 0;
}
