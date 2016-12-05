#include<stdio.h>
int main(void){
    int num1,num2;
    printf("大小比較したい2つの整数を入力してください。\n");
    scanf("%d%d",&num1,&num2);
    
    
    switch(num1 == num2){
    case 0:
	switch(num1 > num2){
	case 0:
	    printf("%dは%dより大きいです。\n",num2,num1);
	    break;
	case 1:
	    printf("%dは%dより大きいです。\n",num1,num2);
	    break;
	}
	break;
    case 1:
	printf("%dは%dと等しいです。/n",num1,num2);
	break;
    }

    return 0;
}
