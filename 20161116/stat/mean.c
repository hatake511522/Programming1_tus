#include <stdio.h>
#include <math.h>

void stat(int *p,int *sum,double *ave){
  int i;
  for(i=0; i<10; i++){
    *sum += p[i];
  }
  *ave = *sum/10;
}
