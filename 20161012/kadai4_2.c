#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//sleep関数とunsleep関数を使うために必要
                  //sleep(x)でx秒数ストップし、usleep(x)でxマイクロ秒ストップする。
int main(void){
    int i;
    int ball_a,ball_b;//ボールA,Bの位置
    int step_a=1;//ボールAの移動速度(右方向)
    int step_b=-1;//ボールBの移動速度(左方向)
    int plate_size=50;//台の長さ
    int center=1;//ぶつかるところ

    //初期位置
    ball_a=1;//左端から一つ右に
    ball_b=plate_size-2;//右端から一つ左に

    while(ball_a > 0){
	for(i=0; i<plate_size; i++){
	    if( i == ball_a){printf("o");}
	    else if( i ==  ball_b){printf("x");}
	    else{printf("_");}
	}
	ball_a += center,ball_b -= center;;//ball_aとball_bの位置を更新
	printf("\n");
	usleep(0.2*1000000);
	printf("\033[1A\033[2K");//エスケープシーケンスを使って一行クリア
	// \033[1Aで1行上にカーソルを移動し、\033[2Kで現在のカーソル位置の行をクリア
	if(ball_a == 24){
	    center=-1;
	}
    }
    sleep(1);//1秒スリープ
    printf("END\n");
    sleep(1);//1秒スリープ

    return 0;
}
