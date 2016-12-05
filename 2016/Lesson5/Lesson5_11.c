#include<stdio.h>
int main(void){
    int num;
    printf("成績を入力してください。\n");
    scanf("%d",&num);
    
    switch(num){
    case 1:
	printf("成績は%dです。\n",num);
	printf("さらに上を目指しましょう。\n");
	break;
    case 2:
	printf("成績は%dです。\n",num);
	printf("もうすこしがんばりましょう。\n");
	break;
    case 3:
	printf("成績は%dです。\n",num);
	printf("さらに上をめざしましょう。\n");
	break;
    case 4:
	printf("成績は%dです。\n",num);
	printf("たいへんよくできました。\n");
	break;
    case 5:
	printf("成績は%dです。\n",num);
	printf("たいへん優秀です。\n");
	break;
    default :
	printf("1~5の成績を入力してください。\n");
	break;
    }

    return 0;
}
