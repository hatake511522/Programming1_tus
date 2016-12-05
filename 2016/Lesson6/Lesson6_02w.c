#include<stdio.h>
int main(void){
    int n,i;

    printf("数値を入力してください。\n");
    scanf("%d",&n);

    i=1;
    while(i<=n){
	     if(i%2 == 0){
	        printf("%d\n",i);
	    }
      i++;
    }

    printf("繰り返しが終わりました。\n");

    return 0;
}
