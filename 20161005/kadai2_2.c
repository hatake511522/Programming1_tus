#include<stdio.h>
int main(void){
    double x,y;
    double epsilon = 0.000000000000001;//誤差（精度）を決めておく。
    double difference;

    x = 0.15 + 0.15;
    y = 0.1 + 0.2;
    
    if(x>y){
	difference = x-y;
    }
    else{
	difference = y-x;
    }

    if(difference < epsilon){
	printf("%.2fと%.2fは等しいです。\n",x,y);
    }
    else{
	printf("%.2fと%.2fは等しいです。\n",x,y);
    }


    return 0;
}
