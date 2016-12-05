#include<stdio.h>
#define square(a) ((a)*(a))

int main(void){

    int x,y,a;
    square(x+y);
    x=2;
    y=3;

    printf("%d\n",square(x+y));

    return 0;    
}

#define num(b) (b*b)
int main(void){

    int x,y,b;
    square(x+y);
    x=2;
    y=3;

    printf("%d/n",square(x+y));

    return 0;
}
