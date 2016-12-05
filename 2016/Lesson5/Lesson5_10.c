#include<stdio.h>
int main(void){
    int num;
    printf("成績を入力してください。\n");
    scanf("%d",&num);
    
    if( num == 1){
	printf("成績は%dです。\n",num);
	printf("さらに上を目指しましょう。\n");
    }
    else if( num == 2){
	printf("成績は%dです。\n",num);
	printf("もうすこしがんばりましょう。\n");
    }
    else if( num == 3){
	printf("成績は%dです。\n",num);
	printf("さらに上をめざしましょう。\n");
    }
    else if( num == 4){
	printf("成績は%dです。\n",num);
	printf("たいへんよくできました。\n");
    }
    else if( num == 5){
	printf("成績は%dです。\n",num);
	printf("たいへん優秀です。\n");
    }
    else {
	printf("1~5の成績を入力してください。\n");
    }

    return 0;
}
