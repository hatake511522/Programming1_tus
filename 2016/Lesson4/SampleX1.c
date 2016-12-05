/*学籍番号：4616072 氏名：畑　洋樹*/
#include <stdio.h>

int main(void){
    int num1,num2;
    printf("整数を入力してください。\n");
  scanf("%d",&num1);
  printf("シフト数を入力してください。\n");
  scanf("%d",&num2);

  printf("%d = %d << %d\n", num1, num2,num1 << num2); //左シフト
  printf("%d = %d >> %d\n", num1, num2,num1 >> num2); //右シフト

  return 0;
}
