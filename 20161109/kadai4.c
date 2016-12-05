#include <stdio.h>

#define  ARRAY_SIZE 5

int main(void){
  int i;
  char array_char[ARRAY_SIZE] ={'a','b','c','d','e'};
  int array_int[ARRAY_SIZE]={1,2,3,4,5};

  void *pointer_void;

  pointer_void = (void*)array_int;
  for(i=0; i<ARRAY_SIZE; i++){
    printf("pointer_charは%pを指しており、値は%cです。\n",pointer_void,pointer_void);//ここでキャスト演算子とpointer_charのみを使って配列array_intの内容を出力する。
  }
  for(i=0; i<ARRAY_SIZE; i++){
    printf("pointer_intは%pを指しており、値は%dです。\n",pointer_void,array_int[i]);//ここでキャスト演算子とpointer_intのみを使って配列array_charの内容を出力する。１
  }

  return 0;
}
