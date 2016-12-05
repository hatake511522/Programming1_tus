#include<stdio.h>
int main(void){
    int year;

    year=0;
    while(year<=300){
  	if(year%4 == 0){
  	    if(year%100 == 0){
  		if(year%400 == 0){printf("%d ",year);}
  	    }
  	else{printf("%d ",year);}
          }
          year++;
        }
    printf("\n");
    return 0;
}
