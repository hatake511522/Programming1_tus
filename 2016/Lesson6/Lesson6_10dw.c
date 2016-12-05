#include<stdio.h>
int main(void){
    int column,line,i,j,ch;
    column = 9;
    line = 5;

    ch = 0;
    i=1;
    do{
      j=0;
	do{
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
  while(j<column);
	printf("\n");
  i++;
    }
    while(i<=line);
    return 0;
}
