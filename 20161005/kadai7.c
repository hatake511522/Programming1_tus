#include<stdio.h>
int main(void){
    int year;
    printf("年を西暦で入力してください。\n");
    scanf("%d",&year);

    if(year <= 2020 && year >= 1896){
	printf("入力された年は%dです。\n",year);
	if(year == 1906){
	    printf("%d年は夏季オリンピック特別開催年です。\n",year);
	}
	else if(year == 1916 || year == 1940 || year == 1944){
	    printf("%d年は夏季オリンピックが中止された年です。\n",year);
	}
	else if(year%4 == 0){
	    printf("%d年は夏季オリンピック開催年です。\n",year);
	}
	else{
	    printf("%d年は夏季オリンピック開催年ではありません。\n",year);
	}
    }
    else{
	printf("1896年から2020年までの年を入力してください。\n");
    }





    return 0;
}
