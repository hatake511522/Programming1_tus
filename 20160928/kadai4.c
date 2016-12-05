#include<stdio.h>
int main(void){
    int year,month,day;
    int year2 = 2016;
    int month2 = 9;
    int day2 = 28;

    printf("生まれた年を入力してください。\n");
    scanf("%d",&year);
    
    printf("生まれた月を入力してください。\n");
    scanf("%d",&month);
    
    printf("生まれた日を入力してください。\n");
    scanf("%d",&day);

    printf("%d年%d月%d日生まれの人は%0d歳です。\n",year,month,day,year2-year+(month2-month)/12+(day2-day)/360);

    return 0;
}
