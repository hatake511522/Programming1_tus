#include <stdio.h>
#include <math.h>

void stat(int *p,int *prd,){
  int i;
  for(i=0; i<10; i++){
    *prd *= p[i];
  }
}
