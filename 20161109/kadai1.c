#include <stdio.h>

#define  ARRAY_SIZE 5

int main(void){
  int i;
  char array_char[ARRAY_SIZE] ={'a','b','c','d','e'};
  int array_int[ARRAY_SIZE]={1,2,3,4,5};

  char *pointer_char;
  int *pointer_int;

  pointer_char = array_char; //配列の先頭要素に代入
  pointer_int = array_int; //

  for(i=0; i<ARRAY_SIZE; i++){
    printf("pointer_charは%pを指しており、値は%cです。\n",pointer_char,pointer_char[i]);
  }
  for(i=0; i<ARRAY_SIZE; i++){
    printf("pointer_intは%pを指しており、値は%dです。\n",pointer_int,pointer_int[i]);
  }

  return 0;
}
