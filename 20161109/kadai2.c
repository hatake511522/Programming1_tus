#include <stdio.h>

#define  ARRAY_SIZE 5

int main(void){
  int i;
  char array_char[ARRAY_SIZE] ={'a','b','c','d','e'};
  int array_int[ARRAY_SIZE]={1,2,3,4,5};

  char *pointer_char;
  int *pointer_int;

  pointer_char = array_int; //kadai1とはそれぞれ異なる配列の先頭アドレスを
  pointer_int = array_char; //pointer_charとpointer_intに代入している。

  for(i=0; i<ARRAY_SIZE; i++){
    printf("pointer_charは%pを指しており、値は%cです。\n",pointer_char,array_char[i]);
  }
  for(i=0; i<ARRAY_SIZE; i++){
    printf("pointer_intは%pを指しており、値は%dです。\n",pointer_int,array_int[i]);
  }

  return 0;
  /*kadai2.c:13:16: warning: incompatible pointer types assigning to 'char *' from 'int [5]' [-Wincompatible-pointer-types]
  pointer_char = array_int; //kadai1<U+3068><U+306F><U+305D><U+308C><U+305E><U+308C><U+7570><U+306A><U+308B><U+914D><U+5217><U+306E><U+5148><U+982D><U+30A2><U+30C9><U+30EC><U+30B9><U+3092>
               ^ ~~~~~~~~~
kadai2.c:14:15: warning: incompatible pointer types assigning to 'int *' from 'char [5]' [-Wincompatible-pointer-types]
  pointer_int = array_char; //pointer_char<U+3068>pointer_int<U+306B><U+4EE3><U+5165><U+3057><U+3066><U+3044><U+308B><U+3002>
  といったコメント文が出力された。
*/
}
