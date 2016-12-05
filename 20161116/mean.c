void stat(int *p, int *sum,double *mean){
  int i;
  for(i=0; i<10; i++){
    sum += p[i];
  }
  mean = sum/10;
}
