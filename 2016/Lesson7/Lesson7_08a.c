#include <stdio.h>
int main(void) {
  int i,num;
  char str[1000];
  num = 0;
  printf("文字列を入力してください(1000字以内)\n");
  scanf("%s", str);

  for(i=0; str[i]!='\0'; i++){
    if (str[i]=='a') {
      num++;
    }
  }

  printf("%sの中にaは%d個あります。\n",str,num);

  return 0;

}
