#include <stdio.h>
#include <math.h>

void stat(int *p,int *sum,double *qave){
  int i;
  int sumv; //二乗和
  for(i=0; i<10; i++){
    *sum += p[i];
    sumv += p[i] * p[i];
  }
  *qave = (double)sumv - (*sum * *sum/10);
}
