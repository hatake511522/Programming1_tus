#include<stdio.h>
int main(void){
    int num,i,j;
    int ch = 0;

    printf("整数を入力してください。\n");
    scanf("%d",&num);

    i=1;
    do{
	if(i <= num){
    j=0;
	    do{
		printf("*");
    j++;
	    }
      while(j<i);
	    printf("\n");
	}
	else{
    j=i-1;
	    do{
		printf("*");
    j--;
	    }
      while(j>=1);
	    printf("\n");
	}
  i++;
    }
    while(i<num);


    return 0;
}
