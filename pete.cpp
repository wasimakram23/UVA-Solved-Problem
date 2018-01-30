#include<stdio.h>

int main()
{
    int c,b,k,total;
    while(scanf("%d%d",&c,&k)==2&&k>1)
    {
        b=total=c;
        while(b>=k){
        c=b/k;
        b=b-c*k+c;
        total=total+c;}
        printf("%d\n",total);
    }
}
