#include<stdio.h>
int main(void){
    int num,i,state,sum;
    state = 1;
    sum = 0;

    printf("各テストの点数を入力してください。\n(負の数を入力すると終了)\n");

    i=1;
    while(state==1){
    	printf("第%d科目：",i);
    	scanf("%d",&num);
    	if(num < 0){
    	    break;
    	   }
         else{
	          sum += num;/*点数和*/
          }
          i++;
	    }
    printf("テストの科目は%d\n",i-1);
    printf("テストの合計は%d\n",sum);
    printf("テストの平均点は%f\n",(double)sum/(double)(i-1));
    printf("\n");
    return 0;
}
