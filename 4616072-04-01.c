#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* 文字列関数を扱えるようにする */
struct node /* 構造体 node の定義 */
{
	int key;
	struct node *parent;
	struct node *left;
	struct node *right;

};
/* 関数 tree_search, tree_minimum, tree_insert の宣言 */
struct node *tree_search(struct node *T,struct node *x, int a);
struct node *tree_minimum(struct node *x);
struct node *tree_insert(struct node *T, struct node *x);
/* （他の関数も宣言すること） */
void inorder_tree_walk(struct node *x);
struct node *tree_minimum(struct node *x);
struct node *tree_maximum(struct node *x);
struct node *tree_delete(struct node *T,struct node *z);


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
	fname[strlen(fname)-1] = '\0';
	fflush(stdin); /* 128文字を超えた入力を標準入力から捨てる */
	fp = fopen(fname, "r"); /* ファイルを読み込みモードで開く */
	fscanf(fp, "%d", &N); /* N をファイルから読み込む */
	for (i=0; i<N; i++){
		fscanf(fp, "%d", &a); /*  値 a をファイルから読み込む */
		x = (struct node *)malloc(sizeof (struct node));
		x->key = a; /* 新しい頂点xを生成してkey をaに指定 */
		x -> left = NULL;
		x -> right = NULL;
		Tree = tree_insert(Tree, x); /*xをTreeに挿入して根の情報を更新*/
		inorder_tree_walk(Tree);
		printf("\n");
		tree_minimum(Tree);
		tree_maximum(Tree);


	}


	fclose(fp); /* 開いたファイルを閉じる */
	fp = fopen(fname, "r"); /* 再度ファイルを読み込みモードで開く */
	fscanf(fp, "%d", &N); /* N をファイルから読み込む */

	for (i=0; i<N; i++){
	    fscanf(fp, "%d", &a); /*  値 a をファイルから読み込む */
	    x = (struct node *)malloc(sizeof (struct node));
	    x->key = a; /* 新しい頂点xを生成してkey をaに指定 */
	    x -> left = NULL;
	    x -> right = NULL;
	    z = tree_search(Tree,a);
	    printf("%d",z);
	    tree_delete(Tree,z);
	    inorder_tree_walk(Tree);
	    printf("\n");
	    tree_minimum(Tree);
	    tree_maximum(Tree);
	}

	fclose(fp); /* 開いたファイルを閉じる */

	return 0;
}

/* tree insert 関数の定義 */
struct node *tree_insert(struct node *T, struct node *x)
{
	struct node *r, *y, *z;
	r = T; /* 根を変数 r に格納 */
	y = NULL;
	z = r;

	while(z != NULL){
		y = z;
		if(x->key < z->key){
			z = z->left;
		} else{
			z = z->right;
		}
	}
	x->parent = y;
	if(y == NULL){
		r = x;
	} else if(x->key < y->key){
		y->left = x;
	} else{
		y->right = x;
	}

	return (r);
}

/* inorder_tree_walk 関数の定義 */
void inorder_tree_walk(struct node *x)
{
	if(x != NULL){
		inorder_tree_walk(x->left);
		printf("% d ", x->key);
		inorder_tree_walk(x->right);
	}
}

/* tree_minimum 関数の定義 */
struct node *tree_minimum(struct node *x)
{
	while(x->left != NULL){
		x = x->left;
	}
	printf("最小値は% d です。\n", x->key);
		return (x);
}

/* tree_maximum 関数の定義 */
struct node *tree_maximum(struct node *x)
{
	while(x->right != NULL){
		x = x->right;

	}
	printf("最大値は%dです。\n", x->key);
		return (x);
}

/* tree_search 関数の定義 */
struct node *tree_search(struct node *T,struct node *x,int a){
  while(x != NULL && a != x->key){
		if(a < x->key){
			x = x->left;
		}
		else{
		    x = x->right;
		}
  }
  return x;
}

/* tree_delete 関数の定義 */
struct node *tree_delete(struct node *T,struct node *z){
    struct node *x,*y,*r;
    T = r;

    if(z -> left == NULL || z -> right == NULL){
			y = z;
    }
    else{
			y = tree_minimum(x -> right);
    }
    if(y -> left != NULL){
			x = y -> left;
    }
    else{
			x = y -> right;
    }
    if(x != NULL){
			(x -> parent) = (y -> parent);
    }
    if(y -> parent == NULL){
			x = r;
    }
    else{
			if(y == y -> parent -> left){
	    	x = y -> parent -> left;
			}
			else{
	    	x = y -> parent -> right;
			}
    }
    if(y != z){
			y -> key = z -> key;
    }
    free(y);
    return (r);
}
