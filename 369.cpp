#include<stdio.h>
double mul(int n,int m)
{
    double c=1;
    int x=n-m+1;
    if(n-m<m){
        x=m+1;
        m=n-m;
    }
    for(int i=m;i>0;i--,x++)
        c=c*(double)x/i;
    return c;
}
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)&&(a&&b)!=0&&a>=b)
    {
        printf("%d things taken %d at a time is %0.lf exactly.\n",a,b,mul(a,b));
    }
}
