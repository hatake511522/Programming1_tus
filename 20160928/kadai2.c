#include<math.h>
#include<stdio.h>

int main(void){

    unsigned int a;
    printf("円の半径を入力してください。:\n");
    scanf("%d",&a);

    printf("円の面積は%fです。\n",a*M_PI);

    return 0;
}
