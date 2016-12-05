#include <stdio.h>
int main(void) {
  int i;
  char str[1000];

  printf("文字列を入力してください(1000字以内)\n");
  scanf("%s", str);

  for(i=0; str[i]!='\0'; i++);//ノットイコールで終わらせる

  printf("文字列の長さは%dです。\n",i);

  return 0;

  return 0;
}
