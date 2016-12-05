#include<stdio.h>
int main(void){
    int year;

    for(year=0; year<=3000; year++){
	if(year%4 == 0){
	    if(year%100 == 0){
		if(year%400 == 0){printf("%d ",year);}
	    }
	else{printf("%d ",year);}
        }
      }
    printf("\n");
    return 0;
}
