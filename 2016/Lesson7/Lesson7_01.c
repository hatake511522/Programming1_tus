#include<stdio.h>
int main(void){
    int test[5] = {80,60,22,50,75};
    int i,j;

    for(i=0; i<10; i++){
	printf("%d番目の人の点数は%dです。\n",i+1,test[i]);
    }

    for(j=0; j<20; j++){
	printf("%d番目の人の点数は%dです。\n",j+1,test[j]);
    }

    return 0;
}
