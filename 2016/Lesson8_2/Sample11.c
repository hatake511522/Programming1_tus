#include<stdio.h>

int a = 0;

/*func関数の定義*/
void func(void){
    int b = 0;
    static int c = 0;

    printf("変数aは%d変数bは%d変数cは%dです。\n",a,b,c);

    a++;
    b++;
    c++;
}

/*main関数の定義*/
int main(void){
    int i;
    for(i=0; i<5; i++)
	func();
    return 0;
}
