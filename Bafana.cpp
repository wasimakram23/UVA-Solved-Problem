#include<stdio.h>

int main()
{
    int t,n,k,p,count=0;
    while(scanf("%d",&t)&&t!=0)
    {
        count=0;
        while(t)
        {
            count++;
            scanf("%d%d%d",&n,&k,&p);
            while(p){k++;p--;if(k>n)k=1;}
            printf("Case %d: %d\n",count,k);
            t--;
        }
    }
}
