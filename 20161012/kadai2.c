#include<stdio.h>
#include<stdlib.h>
int main(void){
    int state =1;
    int i,ans;
    int n;
    unsigned int seed;//乱数の種

    printf("乱数の種を入力してください。\n");
    scanf("%u",&seed);

    srand(seed);//乱数の初期化
    
    for(i=0; state==1; i++){
    printf("何回サイコロを振りますか？\n");
    scanf("%d",&n);

    printf("%d回サイコロを振ります。\n",n);
    for(i = 0; i<=n; i++){
	printf("%d\n",rand()%6+1);
    }

    printf("もう一度サイコロを振りますか？(Yes: 1, No: 0)");
    scanf("%d",&ans);
    
    if(ans == 1){
	continue;
    }
    else if(ans == 0){
	break;
    }
    }

    return 0;
}
