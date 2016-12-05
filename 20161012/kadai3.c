#include<stdio.h>
int main(void){
    int n,i;
    int f0,f1,f2;
    int sum;

    printf("何番目のフィボナッチ数を出力しますか？\n２以上の整数を入力してください。\n");

    scanf("%d",&n);
    f0 = 0;
    f1 = 1;

    for(i = 1; i<n; i++){
	f2=f0+f1;
	f0 = f1;
	f1 = f2;
	sum+= f2;
	}

   printf("%d番目のフィボナッチ数は%dです。\n",n,f2);

   sum += f1;
   printf("0から%d番目までのフィボナッチ数の総和は%dです。\n",n,sum);
   printf("0から%d番目までのフィボナッチ数の平均値は%fです。\n",n,(double)sum/(double)n);
    
   return 0;
}
