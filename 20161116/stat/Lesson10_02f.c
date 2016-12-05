
void stat(int *p,int *sum,int *prd,double *ave,double *qave,double *var){
  int i;
  int sumv; //二乗和
  for(i=0; i<10; i++){
    sum += p[i];
    prd *= p[i];
    sumv += p[i] * p[i];
  }
  ave = *sum/10;
  qave = (double)sumv - (*sum * *sum/10(double));
  var = *qave/9(double);
}
