#include<stdio.h>
void stat(int x1,int x2,int x3,int x4,int x5){
    int sum,multi;
    double ave,meansquare,dispersion;
    sum = x1+x2+x3+x4+x5;
    multi = x1*x2*x3*x4*x5;
    ave=(x1+x2+x3+x4+x5)/5(double);
    meansquare=((x1*x1)+(x2*x2)+(x3*x3)+(x4*x4)+(x5*x5))/5(double);
    dispersion=meansquare/4(double);

    return 0;
}


int main(void){
    int x1,x2,x3,x4,x5;
    printf("5つの整数を入力してください。\n");
    scanf("%d",&x1);
    scanf("%d",&x2);
    scanf("%d",&x3);
    scanf("%d",&x4);
    scanf("%d",&x5);
    
    printf("和は%d\n",sum);
    printf("積は%d\n",multi);
    printf("平均は%f\n",ave);
    printf("二乗平均は%f\n",meansquare);
    printf("分散は%f\n",dispersion);
    return 0;
}
