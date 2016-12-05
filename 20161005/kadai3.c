#include<stdio.h>
int main(void)
{
    //if文などで用いられる条件式の結果は0(偽)と!0(真)で表されていることを確認する。
    printf("(10 > 5)の結果は%d\n",10>5);
    printf("(10 < 5)の結果が%d\n",10<5);

    printf("('A'=='A')の結果は%d\n",'A'=='A');
    printf("('A'=='B')の結果は%d\n",'A'=='B');
    
    //次のどのprintfが実行されるでしょうか？
    if( 0 ){printf("Apple\n");}
    if( 1 ){printf("Banana\n");}
    if( 3 ){printf("Cherry\n");}
    if( -4 ){printf("Durian\n");}
    //真は”0以外の数”として定義される。1以外の非零の数でも真となるので注意。

    return 0;
}
    
