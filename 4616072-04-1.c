#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* 文字列関数を扱えるようにする */
struct node /* 構造体 node の定義 */
{
    int key; struct node *parent; struct node *left; struct node *right;

};
/* 関数 tree_search, tree_minimum, tree_insert の宣言 */
struct node *tree_search(struct node *T, int a);
struct node *tree_minimum(struct struct node *x);
struct node *tree_maximum(struct struct node *x);
struct node *tree_insert(struct node *T, struct node *x);
struct node *inorder_tree_walk(struct node *T, struct node *x);
/* （他の関数も宣言すること） */
int main(void)
{
    struct node *Tree; /* ２分探索木を表す変数は Tree */
    struct node *x, *y, *z; /* 挿入，削除等に用いる node 型変数 */
    int N; /* 数値の数は N */
    int i;
    int a;
    char fname[128]; /* 読み込むファイルの名前を格納する変数 */
    FILE *fp; /* ファイル名は 128 文字まで対応可能にする */
    Tree = NULL; /* Tree の初期化，最初は空 */
/* Tree は２分探索木の根を指す*/
    printf("input filename: "); /* ファイル名の入力を要求 */
    fgets(fname, sizeof(fname), stdin); /* 標準入力からファイル名を取得 */
    fname[strlen(fname)-1] = ’\0’; /* 最後の改行コードを除去 */
    fflush(stdin); /* 128文字を超えた入力を標準入力から捨てる */
    fp = fopen(fname, "r"); /* ファイルを読み込みモードで開く */
    fscanf(fp, "%d", &N); /* N をファイルから読み込む */
    for (i=0; i<N; i++){ /* くりかえし */
	fscanf(fp, "%d", &a); /* 値 a をファイルから読み込む */
	x = (struct node *)malloc(sizeof (struct node));
	x->key = a; /* 新しい頂点xを生成してkey をaに指定 */
	Tree = tree_insert(Tree, x); /* x を Tree に挿入して根の情報を更新*/
	x->left = NULL;
	x->right = NULL;
 /* ループ主要部分（各自作成） */
	    }
    fclose(fp); /* 開いたファイルを閉じる */
    fp = fopen(fname, "r"); /* 再度ファイルを読み込みモードで開く */
    fscanf(fp, "%d", &N); /* N をファイルから読み込む */
    
    for (i=0; i<N; i++){ /* くりかえし
			    .................. /* ループ主要部分（各自作成） */
    }
    fclose(fp); /* 開いたファイルを閉じる */
}

struct node *tree_insert(struct node *T, struct node *x)
			 {
			     struct node *r, *y, *z;
			     r = T; /* 根を変数 r に格納 */
			     y = NULL;
			     z = r;

			     while(z!=NULL){
				 y = z;
				 if(x-> key < z-> key){
				     z = z -> left;
				 }
				 else{
				     z = z -> right;
				 }
				 
			     }
			     x -> parent = y;
			     if(y == NULL){
				 r = x;
			     }
			     else {
				 if(x -> key < y->key){
				     y -> left = x;
				 }
				 else{
				     y -> right = x;
				 }
 /* 主要部分（各自作成） */
				 return (r);
			 }

void inorder_tree_walk(struct node *x)
{
    if(x!=NULL){
	inorder_tree_walk(x->left);
	printf("%d",x->key);
	inorder_tree_walk(x->right);
    }
}

void tree_minimum(struct *x)
{
    while(x->left != NULL){
	x = x->left;
    }
    printf("")
}
