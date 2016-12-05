#include<stdio.h>
int main(void){
    int inum;
    double dnum;

    dnum = 160.5;

    printf("身長は%fセンチです。\n",dnum);
    printf("int型の変数に代入します。\n");

    inum = dnum;/*より小さなサイズの型に代入する。*/

    printf("身長は%dセンチです。\n",inum);

    return 0;
}
