#include<stdio.h>
int main(void){
    int column,line,i,j,ch;
    column = 9;
    line = 5;

    ch = 0;

    for(i=1; i<=line; i++){
	for(j=0; j<column; j++){
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
	}
	printf("\n");
    }
    return 0;
}
