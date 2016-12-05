
void stat(int *p,int *multi){
  int i;
  for(i=0; i<10; i++){
    *multi *= p[i];
  }
}
