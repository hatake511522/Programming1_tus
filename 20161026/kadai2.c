#include<stdio.h>

int olympic_check(int year){
    if(year <= 2020 && year >= 1896){
	printf("入力された年は%dです。\n",year);
	if(year == 1906){
	    return 2;
	}
	else if(year == 1916 || year == 1940 || year == 1944){
	    return -1;
	}
	else if(year%4 == 0){
	    return 1;
	}
	else{
	    return 0;
	}
    }
    else{
	return -2;
    }
}


int main(void){
    int year,result;
    printf("年を西暦で入力してください。\n");
    scanf("%d",&year);

    result=olympic_check(year);
    
    if(result==0){
	printf("%d年は夏季オリンピックは実施されてない。\n",year);
    }
    else if(result == 1){
	printf("%d年は夏季オリンピックが実施された。\n",year);
    }
    else if(result == 2){
	printf("%d年は夏季オリンピック特別開催年である。\n",year);
    }
    else if(result == -1){
	printf("%d年は夏季オリンピックが中止された。\n",year);
    }
    else{
	printf("1896~2020年を入力してください。\n");
    }
    return 0;
}
