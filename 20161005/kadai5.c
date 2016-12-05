#include<stdio.h>
int main(void){
    int x;
    
    x=0;
    if(10>5 && (x=3)==3){
	printf("True\n");
    }
    else{
	printf("False\n");
    }
    printf("xの値は%d\n",x);

    x=0;
    if(10<5 && (x=3)==3){
	printf("True\n");
    }
    else{
	printf("False\n");
    }
    printf("xの値は%d\n",x);

    //複数の条件文を&&でつないだ場合、左から条件文が順に評価される。
    //途中で偽ろなると評価をストップし、それ以降の条件文は評価されない。


    return 0;
}
