#include<stdio.h>
int main(void){
    int column,line,i,j,ch;
    column = 9;
    line = 5;

    ch = 0;
    i=1;
    while(i<=line){
      j=0;
	while(j<column){
	    if(ch==0){
		printf("*");
		ch = 1;
	    }
	    else if(ch ==1){
		printf("-");
		ch = 2;
	    }
	    else{
		printf("+");
		ch = 0;
	    }
      j++;
	}
	printf("\n");
  i++;
    }
    return 0;
}
