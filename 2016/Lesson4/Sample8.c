#include<stdio.h>
int main(void){
    int inum;
    double dnum;

    inum = 160;

    printf("身長は%dセンチです。\n",inum);
    printf("double型の変数に代入します。\n");

    dnum = inum;/*より大きなサイズの型に代入する。*/

    printf("身長は%fセンチです。",dnum);

    return 0;
}
