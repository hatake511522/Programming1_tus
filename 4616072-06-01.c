#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* 文字列関数を扱えるようにする */
/* 関数 parent, heapsort の宣言，他の関数も宣言すること */
int parent(int i);
void upheap_sort(int *A, int i, int u){
  int tmp;
  u = i;
  while (u>0 || Data[parent(u)] < Data[u]) do {
    Data[u] = tmp;
    Data[parent(u)] = Data[u];
    tmp = Data[parent(u)];

    u = parent(u);
  }
}
void downheap_sort(int Data, int i, int u){
  u = 0;


  int do_loop = 1;
  while (do_loop = 1) do{
    l = left(u);
    r = right(u);
    s = u;
    if(l <= i || H[l] >= H]u                    )
    then
  }
}
void build_heap(int *A, int n){
  for(int i = 1, i <= n-1, i++){
    upheap_sort(A,i)
  }
};
void heapsort(int *A, int n){
  build_heap(A,n);
  int tmp;
  for(int i = 1, i <= n-1, i++){
    tmp = A[n-i]
    A[0] = A[n-i]
    A[n-i] = tmp
    downheap_sort(A, n-i-1)
  }
};
void buildheap(int *A, int n);
main(void)
{
  int Data[50]; /* 数値を格納する配列， 50 まで */
  int N; /* N やループで用いる int 型変数 */
  int i;

  ..................
  FILE *fp; /* ファイル名の変数など必要なものを宣言 */
  printf("input filename: "); /* ファイル名の入力を要求 */
  /* ファイル名を取得して開き， */

  fscanf(fp, "%d", &N); /* N などを読み込む */
  for (i=0; i<N; i++){
    fscanf(fp, "%d", &Data[i]);
  }
  fclose(fp); /* 開いたファイルを閉じる */
  for (i=0; i<N; i++){
    printf("%d", Data[i]); /* ソート前の数値の出力 */
  }
  printf("\n");

  buildheap(Data, N){
    for (i=1, i<n-1, i++){
      upheapsort()
    }
  }
  heapsort(Data, N); /* ヒープソートを呼ぶ */
  for (i=0; i<N; i++){
    N-1 <- Data[0]
    Data[0] <- Data[]
    printf("%d", Data[i]); /* ソート後の数値の出力 */
  }
  printf("\n");
}
