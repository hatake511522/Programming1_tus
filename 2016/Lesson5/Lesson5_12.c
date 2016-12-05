#include<stdio.h>
int main(void){
    int num1,num2,multi;
    printf("2つの整数を入力してください。\n");
    scanf("%d%d",&num1,&num2);
    multi = num1*num2;
  
    
    switch(multi > 0){
    case 1:
	printf("%dと%dは同符号です。\n",num1,num2);
	break;
    case 0:
	switch(multi = 0){
	case 1:
	    printf("0が入力されました。\n");
	    break;
	case 0:
	    printf("%dと%dは異符号です。\n",num1,num2);
	    break;
	}
    }
    return 0;
}
