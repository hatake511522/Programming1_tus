#include<stdio.h>
double x_plus_y(double x,double y){
	printf("仮引数においてxのアドレスは%p.\nyのアドレスは%pとなる.\n",&x,&y);/*仮引数xとyのアドレスを出力する。*/
	return x+y;
}

int main(void){
	double x,y;
	x=y=0.5;
	printf("実引数においてのxのアドレスは%p.\nyのアドレスは%p.\n",&x,&y);/*実引数xとyのアドレスを出力する。*/
	printf("%f\n",x_plus_y(x,y));
	return 0;
    }
