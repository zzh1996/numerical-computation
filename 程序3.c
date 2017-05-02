#include <stdio.h>
#include <stdlib.h>

double newton(int n,double *x,double *y,double xx){
    int i,j,k;
    double *g=malloc((n+1)*sizeof(double));
    double t=1,r;
    for(i=0;i<=n;i++)
        g[i]=y[i];
    for(k=1;k<=n;k++)
        for(j=n;j>=k;j--)
            g[j]=(g[j]-g[j-1])/(x[j]-x[j-k]);
    r=g[0];
    for(k=1;k<=n;k++){
        t*=xx-x[k-1];
        r+=t*g[k];
    }
    return r;
}

int main(){
    int n=5;
    double x[]={1920,1930,1940,1950,1960,1970};
    double y[]={105711,123203,131669,150697,179323,203212};
    printf("f(1965)=%g\n",newton(n,x,y,1965));
    printf("f(2012)=%g\n",newton(n,x,y,2012));
    return 0;
}