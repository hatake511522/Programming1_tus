#include<stdio.h>

int main(void){
    int x = 50,y= 100;
    int *px ,*py;

    px=&x;
    py=&y;

    printf("pxが指しているのは%d\n",*px);
     printf("pyが指しているのは%d\n",*py);

     px=&y;
     py=&x;

    printf("入れ替えたので\n");
    printf("pxが指しているのは%dです。\n",*px);
    printf("pyが指しているのは%dです。\n",*py);
    
    return 0;
}
