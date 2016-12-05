#include <stdio.h>
#include <math.h>

void stat(int *p,int *sum,int *prd,double *ave,double *qave,double *var){
  int i;
  int sumv; //二乗和
  for(i=0; i<10; i++){
    *sum += p[i];
    *prd *= p[i];
    sumv += p[i] * p[i];
  }
  *ave = *sum/10;
  *qave = (double)sumv - (*sum * *sum/10);
  *var = *qave/9;
}

int main(void){
  int n[10];
  int s,p;
  double a,qa,v;

  for(int i=0; i<10; i++){
    scanf("%d\n", &n[i]);
  }
  stat(&*n,&s,&p,&a,&qa,&v);

  printf("和は%d\n",s);
  printf("積は%d\n",p);
  printf("平均は%f\n",a);
  printf("二乗平均は%f\n",qa);
  printf("分散は%f\n",v);
  return 0;
}
