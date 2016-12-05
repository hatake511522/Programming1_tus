#include<stdio.h>
int main(void){
    double x,y;
    
    //xとyはどちらも0.3である。
    x = 0.15 + 0.15;
    y = 0.1 + 0.2;
    
    if( x == y ){
	printf("%.2fと%.2fは等しいです。\n",x,y);
    }
    else{
	printf("%.2fと%.2fは異なります。\n",x,y);
    }
    //10進数の0.1は2進数で0.00110011001100...と循環する　これが誤差の原因となって正しく比較できない


    return 0;
}
