#include<stdio.h>

int main(void){
    int value = 5;
    char buffer1[8] = "one";
    char buffer2[8] = "two";

    printf("[before]buffer1の値は\'%s\'です。\n",buffer1);
    printf("[before]buffer2の値は\'%s\'です。\n",buffer2);
    printf("[before]valueの値は\'%d\'です。\n",value);

    scanf("%7s",buffer2);

    printf("[after]buffer1の値は\'%s\'です。\n",buffer1);
    printf("[after]buffer2の値は\'%s\'です。\n",buffer2);
    printf("[after]valueの値は\'%d\'です。\n",value);

    return 0;
}
    
    
