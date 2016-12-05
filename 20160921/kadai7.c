#include <stdio.h>
int main(void){
    int i1,i2;
    double d1,d2;
    char ch1,ch2;

    printf("整数をスペースで区切って二つ一度に入力してください。\n");
    scanf("%d %d",&i1,&i2);
    printf("入力された整数は %dと %dです。\n",i1,i2);

    printf("小数をスペースで区切って二つ一度に入力してください。\n");
    scanf("%lf %lf",&d1,&d2);
    printf("入力された小数は %fと %fです。\n",d1,d2);

    printf("英数字を一文字入力してください。(scanf)\n");
    scanf(" %c",&ch1);
    printf("入力された文字は %cです。\n",ch1);
    
    printf("英数字を一文字入力してください。(getchar)");
    ch1 = getchar();
    ch1 = getchar();
    printf("入力された文字は%cです。\n",ch1);

    printf("英数字をスペース区切りで二つ一度に入力してください。(scanf)\n");
    scanf(" %c %c",&ch1,&ch2);
    printf("入力された文字は　%cと%cです。\n",ch1,ch2);
    
    printf("英数字をスペース区切りで二つ一度に入力してください。(getchar)\n");
    ch1 = getchar();
    ch1 = getchar();
    ch2 = getchar();
    ch2 = getchar();
    printf("入力された文字は%cと%cです。\n",ch1,ch2);

    return 0;
}
