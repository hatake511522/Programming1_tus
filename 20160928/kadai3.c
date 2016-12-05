#include<stdio.h>
int main(void){
    int m;
    double w;
    
    printf("リンゴ一つあたりの重さを入力してください:\n");
    scanf("%lf",&w);
    
    printf("リンゴの個数を入力してください:\n");
    scanf("%d",&m);

    printf("リンゴ一つあたりの重さは%lfです。\n",w);
    printf("リンゴの個数は%dです。\n",m);
    printf("%d個のリンゴの重さは合計%lfです。\n",m,m*w);

    return 0;
}
