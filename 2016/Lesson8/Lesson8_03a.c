#include<stdio.h>

int power(int x,int y){
    int i,z;
    z=1;
    for(i=0; i<y; i++){
	z=z*x;
    }

    return z;
}

int main(void){
    printf("1から20までの整数を2,3,.....,7乗すると\n以下のようになります。\n");
    for(int i=1; i<=20; i++){
	printf("%d :   ",i);
	for(int j=2; j<=7; j++){
	    printf("%d   ",power(i,j));
	}
	printf("\n");
    }

    return 0;
}
