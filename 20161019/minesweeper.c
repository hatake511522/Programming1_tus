#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MS_SIZE 8 //ゲームボードのサイズ（変更不可）

int main(void){
    int state;
    state = 0;
    do{
  int mode;//モードを保持
  int number_of_mines = 10;//地雷数のデフォルト１０個
  int mine_map[MS_SIZE][MS_SIZE];//地雷セルと数字セルを記録
  int game_board[MS_SIZE][MS_SIZE];//ゲームの進行を記録するためのゲームボード
  //必要な変数は適宜追加する
  int ans;
  int x,y;


  srand((unsigned)time(NULL)); //time関数で乱数を初期化する。

  /*地雷をランダムにセット*/
  int bomb = number_of_mines
  srand(time(0));
  for(int i=0; i<=bomb; i++){
      x = rand() % 8;
      y = rand() % 8;
      if(mine_map[x][y] == -1){
	  bomb++;
      }
      else{
	  mine_map[y+1][x+1] = -1;
      } 
  }
  printf("\n")
  

    /*課題２　各セルの８近傍の地雷をカウント*/
    for (i = 0; i <= MS_SIZE+1; i++) {
      for (int j = +1; j < MS_SIZE+1; j++) {
        if (mine_map[i][j] == -1) {
          for (int k = i-1; k <= i+1; k++) {
            for (int l = j-1; l <= j+1; l++) {
              if (mine_map[k][l] != -1) { mine_map[k][l]++;}
            }
          }
        }
      }
    }
    printf("[y]\n\n");
    for (i = 0; i <= MS_SIZE+1; i++) {
      printf("%d| ", i-1);
      for (j = 0; j <= MS_SIZE+1; j++) {
          printf("%3d",mine_map[i][j]);
      }
      printf("\n");
    }
    printf("  -----------------------------\n");
    printf("     0  1  2  3  4　5　6 7  [x]\n");

    /* 課題２ 各セルの８近傍の地雷をカウント */

    int state, column, line, open_cell;
    state = 0;
    open_cell = 0;

     while ( state == 0 ) {
      printf("\f");
      printf("[y]\n\n");
      for (i = 0; i <= MS_SIZE+1; i++) {
        printf("%d| ", i-1);
        for (j = 0; j <= MS_SIZE+1; j++) {
          if (game_bored[i][j] == 0) {
            printf("  x");
          } else {
            printf("%3d", mine_map[i][j]);
          }
        }
        printf("\n");
      }
      printf("  -----------------------------\n");
      printf("    0 1 2 3 4 5 6 7 [x]\n");
      printf("モードを選択してください:　セルを開く（１）、フラグを設置/除去する（２）:");
      scanf("%d", &mode);
      while ( mode != 1 && mode != 2 ) {
        printf("１か２を入力してください:");
        scanf("%d", &mode);
      }

      if (mode==1) {
        /*課題３　セルを開ける。地雷があればゲームオーバー。地雷がなければ選択したセルと周囲８近傍のセルを開ける。*/
         printf("開くセルを入力してください\n");
         printf("x：");
         scanf("%d", &column);
         printf("y：");
         scanf("%d", &line);
         column++;
         line++;
         if (mine_map[line][column] == -1) {
           state = 1;
           printf("ゲームオーバー！\n");
         } else {
          for (i = line-1; i <= line+1; i++) {
            for (j = column-1; j <= column+1; j++) {
              if (mine_map[i][j] != -1) {
                game_bored[i][j] = 1;
              }
            }
          }
         }
      } else {
        /*課題４　選択されたセルにフラグを設置する*/
        printf("旗を置く場所を選択してください。\n");
        printf("x：");
        scanf("%d", &column);
        printf("y：");
        scanf("%d", &line);
        column++;
        line++;
        if (game_bored[line][column] == 2) {
          game_bored[line][column] = 0;
        } else {
          game_bored[line][column] = 2;
        }
      }

      for (i = 1; i < MS_SIZE+1; i++) {
        for (j = 1; j < MS_SIZE+1; j++) {
          if (game_bored[i][j] == 1) {
            open_cell++;
          }
        }
      }
      if (open_cell == (64 - number_of_mines)) {/* 課題５ ゲームのクリア条件 */
        printf("Congratulation!\n");
        state = 1;
      }
      open_cell




printf("もう一度プレイしますか？(Yes: 1, No: 0)");
    scanf("%d",&ans);
    
    if(ans == 1){
        continue;
    }
    else if(ans == 0){
        break;
    }
    }while(state == 0);

return 0;
}
