#include <stdio.h>

void setonetwothree(int *p){
  p[0]=1;
  p[1]=2;
  p[2]=3;
}

int main(void){
  int i;
  int a[5] = {0};/*全要素初期化*/

  setonetwothree(a);

  for(i=0; i<5; i++){
    printf("a[%d] = %d\n",i,a[i]);
  }
  return 0;
}
