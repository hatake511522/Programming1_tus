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
