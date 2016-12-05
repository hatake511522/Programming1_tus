#include<stdio.h>
int main(void){
    int num,i,state,sum;
    state = 1;

    printf("各テストの点数を入力してください。\n(負の数を入力すると終了)\n");

    for(i=1; state==1; i++){
	printf("第%d科目：",i);
	scanf("%d",&num);
	if(num < 0){
	    break;
	}

	sum += num;/*点数和*/

	    }
    printf("テストの合計は%d\n。",sum);
    printf("\n");
    return 0;
}
