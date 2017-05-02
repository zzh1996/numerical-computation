#include <stdio.h>
#include <stdlib.h>

double lagrange(int n,double *x,double *y,double xx){
    int i,j;
    double fx=0.0;
    for(i=0;i<=n;i++){
        double t=1.0;
        for(j=0;j<=n;j++){
            if(j!=i)
                t*=(xx-x[j])/(x[i]-x[j]);
        }
        fx+=t*y[i];
    }
    return fx;
}

int main(){
    int n,i;
    double *x,*y,xx;
    printf("n=");
    scanf("%d",&n);
    x=malloc((n+1)*sizeof(double));
    y=malloc((n+1)*sizeof(double));
    for(i=0;i<=n;i++){
        printf("x%d=",i);
        scanf("%lf",&x[i]);
        printf("y%d=",i);
        scanf("%lf",&y[i]);
    }
    printf("x=");
    scanf("%lf",&xx);
    printf("f(x)=%g\n",lagrange(n,x,y,xx));
    return 0;
}