#include<stdio.h>
int main(void){
    int res;
    printf("成績を入力してください。(1~5)\n");
    scanf("%d",&res);
    
    switch(res){
    case 1:
	printf("気合いを入れ直してください。\n");
	break;
    case 2:
	printf("気合いを入れ直してください。\n");
	break;
    case 3:
	printf("よろしいと思います。\n");
	break;
    case 4:
	printf("よろしいと思います。\n");
	break;
    case 5:
	printf("素晴らしい！\n");
	break;
    default:
	printf("1~5までの成績を入力してください。\n");
	break;
    }
    return 0;
}
