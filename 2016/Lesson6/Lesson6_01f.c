#include<stdio.h>
int main(void){
    int n,i;

    printf("数値を入力してください。\n");
    scanf("%d",&n);
    
    for(i=n; i>=1; i--){
	printf("%d\n",i);
    }

    printf("繰り返しが終わりました。\n");

    return 0;
}
