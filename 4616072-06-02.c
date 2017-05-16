#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* 文字列関数を扱えるようにする */
/* 関数 parent, heapsort の宣言，他の関数も宣言すること */
int parent(int i);
void heapsort(int *A, int n);
main(void)
{
int Data[50]; /* 数値を格納する配列， 50 まで */
int N; /* N やループで用いる int 型変数 */
..................
FILE *fp; /* ファイル名の変数など必要なものを宣言 */
printf("input filename: "); /* ファイル名の入力を要求 */
/* ファイル名を取得して開き， */
.................. /* N などを読み込む */
1
for (i=0; i<N; i++){
fscanf(fp, "%d", &Data[i]);
}
fclose(fp); /* 開いたファイルを閉じる */
for (i=0; i<N; i++){
printf("%d", Data[i]); /* ソート前の数値の出力 */
}
printf("\n");
heapsort(Data, N); /* ヒープソートを呼ぶ */
for (i=0; i<N; i++){
printf("%d", Data[i]); /* ソート後の数値の出力 */
}
printf("\n");
}
