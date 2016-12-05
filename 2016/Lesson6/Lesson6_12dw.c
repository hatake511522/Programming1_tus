#include<stdio.h>
int main(void){
    int year;

    year=0;
    do{
  	if(year%4 == 0){
  	    if(year%100 == 0){
  		if(year%400 == 0){printf("%d ",year);}
  	    }
  	else{printf("%d ",year);}
          }
          year++;
        }
        while(year<=300);
    printf("\n");
    return 0;
}
