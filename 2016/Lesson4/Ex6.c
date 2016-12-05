#include<stdio.h>
int main(void){

    double height,weight;
    

    printf("身長[cm]と体重[kg]を入力してください。\n");
    scanf("%lf%lf", &height, &weight);

    
    double height2 = (int)height/(double)100;
    double bmi = weight/(height2*height2);

    printf("身長は %.4f[m]、体重は %.4f[kg]、BMIは %lfです。\n",height2,weight,bmi);

    return 0;
}
