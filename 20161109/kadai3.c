#include <stdio.h>

#define  ARRAY_SIZE 5

int main(void){
  int i;
  char array_char[ARRAY_SIZE] ={'a','b','c','d','e'};
  int array_int[ARRAY_SIZE]={1,2,3,4,5};

  char *pointer_char;
  int *pointer_int;

  /*kadai1.cの（１）と（２）の部分を変更。kadai1.cとはそれぞれ異なる配列の先頭アドレスをpointer_charとpointer_intに代入している。キャスト演算子で代入先の変数の型と代入される変数の型を無理やり合わせている。*/
  pointer_char = (char*)array_int;
  pointer_int = (int*)array_char;

  for(i=0; i<ARRAY_SIZE; i++){
    printf("pointer_charは%pを指しており、値は%cです。\n",pointer_char,array_char[i]);//ここでキャスト演算子とpointer_charのみを使って配列array_intの内容を出力する。
  }
  for(i=0; i<ARRAY_SIZE; i++){
    printf("pointer_intは%pを指しており、値は%dです。\n",pointer_int,array_int[i]);//ここでキャスト演算子とpointer_intのみを使って配列array_charの内容を出力する。１
  }

  return 0;
}
