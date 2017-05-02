#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i;
    double x[]={0.0,0.5,1.0,sqrt(2),10.0,100.0,300.0};
    for(i=0;i<7;i++){
        double sum=0;
        int k;
        for(k=1;k<=1000000;k++)
            sum+=1.0/k/(k+x[i]);
        printf("f(%g)=%.7f\n",x[i],sum);
    }
    return 0;
}
