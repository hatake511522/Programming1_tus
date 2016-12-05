#include <stdio.h>
int main(void){
  int i,j,k;
  int matrix1[3][3];
  int matrix2[3][3];
  int trans1[3][3];
  int trans2[3][3];
  int sum[3][3];
  int diff[3][3];
  int multi[3][3];

/*  行列入力  */
  printf("\n行列1を入力してください\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("行列の要素[%d][%d] = ", i+1, j+1);
      scanf("%d", &matrix1[i][j]);
    }
  }
  printf("\n行列2を入力してください\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("行列の要素[%d][%d] = ", i+1, j+1);
      scanf("%d", &matrix2[i][j]);
    }
  }

/*  入力した行列の表示  */
  printf("\n行列1 \n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d  ", matrix1[i][j]);
      if(j==2){printf("\n");}
    }
  }
  printf("\n行列2 \n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d  ", matrix2[i][j]);
      if(j==2){printf("\n");}
    }
  }


/*  行列の和  */
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
/*  行列の和の表示  */
  printf("\n行列の和 \n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d  ",sum[i][j]);
      if(j==2){printf("\n");}
    }
  }



/*  行列の差  */
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      diff[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
/*  行列の差の表示  */
  printf("\n行列の差 \n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d  ",diff[i][j]);
      if(j==2){printf("\n");}
    }
  }



/*  行列の積  */
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      for(k=0; k<3; k++){
      multi[i][j] = matrix1[i][j] * matrix2[i][j];
    }
    }
  }
/*  行列の積の表示  */
  printf("\n行列の積 \n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d  ",multi[i][j]);
      if(j==2){printf("\n");}
    }
  }




/*  転置行列  */
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
     trans1[j][i]=matrix1[i][j];
    }
  }
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
     trans2[j][i]=matrix2[i][j];
    }
  }

/*  転置行列の表示  */
  printf("\n転置行列1 \n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d  ",trans1[i][j]);
      if(j==2){printf("\n");}
    }
  }

  printf("\n転置行列2 \n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d  ",trans2[i][j]);
      if(j==2){printf("\n");}
    }
  }
    printf("\n");
    return 0;
}
