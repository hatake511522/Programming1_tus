#include <stdio.h>
#include <math.h>

void stat(int *p,int *sum){
  int i;
  for(i=0; i<10; i++){
    *sum += p[i];
  }
}
