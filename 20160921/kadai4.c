#include<stdio.h>
int main(void){

    unsigned int num;
    printf("自然数を入力してください。\n");
    scanf("%d",&num);

    printf("%dは10進数で%dです。\n",num);
    printf("%dは8進数で%oです。\n",num);
    printf("%dは16進数で%xです。\n",num);

    return 0;
}
