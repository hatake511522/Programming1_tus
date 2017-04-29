#include<stdio.h>
#define ARRAY_SIZE (5)
int main(void){
    char array_char[ARRAY_SIZE] = {'a','b','c','d','e'};
    for(int i=0; i<ARRAY_SIZE; i++){
	//アドレスを表示するときは%pを使う。
	printf("array_char[%d]のアドレスは%pです。\n",i,&array_char[i]);
    }

    return 0;
}
