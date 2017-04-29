#include <stdio.h>

int main(void){
  int year,month,day;

  printf("西暦と月を入力してください。\n");
  printf("西暦：");
  scanf("%d\n", &year);
  printf("\n");
  printf("月：");
  scanf("%d\n", &month);
  printf("\n");
  if (year%4 == 0){
    if (year%100 != 0){
      if(year%400 == 0){
        //うるうどし
        if(month == 1 || month == 3 || month ==7 || month == 8 || month == 10){
          day = 31;
        }
        else if(month == 4 || month == 6 || month == 9 || month == 11){
          day = 30;
        }
        else {
          day = 29;
        }
      }
      else{
        //うるうどしでない
        if(month == 1 || month == 3 || month ==7 || month == 8 || month == 10){
          day = 31;
        }
        else if(month == 4 || month == 6 || month == 9 || month == 11){
          day = 30;
        }
        else {
          day = 28;
        }
      }
    }
    else{
      //うるうどし
      if(month == 1 || month == 3 || month ==7 || month == 8 || month == 10){
        day = 31;
      }
      else if(month == 4 || month == 6 || month == 9 || month == 11){
        day = 30;
      }
      else {
        day = 29;
      }
    }
  }
  else{
    //うるうどし
    if(month == 1 || month == 3 || month ==7 || month == 8 || month == 10){
      day = 31;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11){
      day = 30;
    }
    else {
      day = 29;
    }
  }
  printf("%d年%d月の日数は%d日です。\n",year,month,day);
}
