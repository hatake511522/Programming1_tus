#include<stdio.h>
int main(void){
    char ch1,ch2,ch3;
    printf("アルファベットの1番目の文字と3番目の文字と5番目の文字を入力してください。\n");
    ch1 = getchar();
    ch2 = getchar();
    ch2 = getchar();
    ch3 = getchar();
    ch3 = getchar();

    printf("アルファベットの1番目の文字は %c です。\n",ch1);
    printf("アルファベットの3番目の文字は %c です。\n",ch2);
    printf("アルファベットの5番目の文字は %c です。\n",ch3);

    return 0;
}

