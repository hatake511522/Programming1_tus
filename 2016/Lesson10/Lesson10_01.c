#include <stdio.h>

void swap2(double *p,double *q){
  double work;
  work = *p;
  *p = *q;
  *q = work;
}

void sort3(double *a,double *b,double *c){
  if(a>b){
    if(b>c){}
    else{
      if(a>c){swap2(b,c);}
      else{
        swap2(a,c);
        swap2(b,a);
      }
    }
  }
  else{
    if(c>a){
      if(c>b){swap2(a,c);}
      else{
        swap2(b,c);
        swap2(c,a);
      }
    }
    else{
      if(b>c){}
      else{swap2(b,c);}
    }
  }
}

int main(void){
  double d1,d2,d3;

  printf("d1,d2,d3の値を入力してください。\n");
  scanf("%lf",&d1);
  scanf("%lf",&d2);
  scanf("%lf",&d3);

  sort3(&d1,&d2,&d3);

  printf("d1の値は%f\n", d1);
  printf("d2の値は%f\n", d2);
  printf("d3の値は%f\n", d3);

  return 0;
}
