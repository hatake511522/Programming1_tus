#include <stdio.h>

int GetRandom(int min, int max);
int main(void){
  int x,y,z,max,min ;
  max = 99;
  min = 0;
  y = GetRandom(0,99);
  z = x-y;
  printf("数を入力してください。(0以上99以下)\n");
  scanf("%d\n", &x);
  while (z != 0) {
    if (x >= 0 || x >= 99){
      if(z == 0){
        printf("正解です\n");
      }
      if(z >= 10){
        printf("大きすぎます\n");
      }
      else if(z >= 1 || z <= 9){
        printf("大きいです\n");
      }
      else if(z <= -1 || z >= -9){
        printf("小さいです\n");
      }
      else{
        printf("小さすぎです\n");
      }
    }
    else{
      printf("0以上99以下の数字を入力してください。\n");
    }
  }
}
