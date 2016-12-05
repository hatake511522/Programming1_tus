
#include<stdio.h>
int main(void){
    int test[5] = 0;
    int i,j;
    printf("5人の点数を入力してください。\n");

    for(j=0; j<5; j++){
	scanf("%d,&test[j]");
    }

    for(i=0; i<5; i++){
	printf("%d番目の人の点数は%dです。\n",i+1,test[j]);
    }

    return 0;
}
