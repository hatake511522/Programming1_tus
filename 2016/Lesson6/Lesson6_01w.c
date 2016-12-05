#include <stdio.h>
int main(void){
  int n;

  printf("数値を入力してください。\n");
  scanf("%d",&n);

  while(n >= 1){
    printf("%d\n",n);
    n--;
  }

  printf("繰り返しが終わりました。\n");

  return 0;
}
