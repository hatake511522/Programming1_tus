#include<stdio.h>
int main(void){
    int num;
    printf("整数を入力してください。\n");
    scanf("%d",&num);

    switch(num){
    case 1:
	printf("1が入力されました。\n");
	break;
    case 2:
	printf("2が入力されました。\n");
	break;
    case 3:
	printf("3が入力されました。\n");
	break;
    default:
	printf("1か2か3を入力してください。\n");
	break;
    }

    return 0;
}
