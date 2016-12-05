#include<stdio.h>
int main(void){
    int num;
    printf("整数を入力してください。\n");
    scanf("%d",&num);

    if( num%3 == 0){
	printf("%dを3で割ると割り切れます。\n",num);
    }
    else if( num%3 == 1){
	printf("%dを3で割ると1余ります。\n",num);
    }
    else{
	printf("%dを3で割ると2余ります。\n",num);
    }

    return 0;
}
