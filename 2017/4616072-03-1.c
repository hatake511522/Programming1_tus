#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* 文字列関数を扱えるようにする */
struct cell
{
int key; int prev; int next; /* 構造体 cell の定義 */
};
int allocate_object(struct cell *L, int *f); /* 関数 allocate_object の宣言 */

main(void)
{
struct cell List[50]; /* リストは cell の配列，数値数は 50 まで */
int N; /* 数値の数は N */
int i;
int head, freeL; /* リスト List の先頭，空きアドレスリストの先頭 */
char fname[128]; /* 読み込むファイルの名前を格納する変数 */
FILE *fp; /* ファイル名は 128 文字まで対応可能にする */
for (i=0; i<49; i++){ /* allocate_object, free_object のための初期化 */
List[i].next = i+1;
}
List[49].next = -1;
head = -1; freeL = 0; /* head free_object の初期化 */
printf("input filename: "); /* ファイル名の入力を要求 */
fgets(fname, sizeof(fname), stdin); /* 標準入力からファイル名を取得 */
fname[strlen(fname)-1] = ’\0’; /* 最後の改行コードを除去 */
fflush(stdin); /* 128文字を超えた入力を標準入力から捨てる */
fp = fopen(fname, "r"); /* ファイルを読み込みモードで開く */
fscanf(fp, "%d", &N); /* N をファイルから読み込む */
.................. /* 主要部分（各自作成） */
for(int n,)
fclose(fp); /* 開いたファイルを閉じる */
}
x  head ;
y  x;
min  ;
while x  NIL do
if key[x] < min then
min  key[x]; y  x;
x  next[x];
return y;
