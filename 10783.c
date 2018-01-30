#include<stdio.h>
int main()
{
    int t,a,b,sum,i,j,k;
    scanf("%d",&t);
    if(t>=1&&t<=100)
    {
        for(k=1;k<=t;k++)
          {
        sum=0;
        scanf("%d",&a);
        scanf("%d",&b);
        if((a>=0&&a<=100)&&(b>=0&&b<=100))
        {
            if(a>b){for(i=b;i<=a;i++)if(i%2!=0)sum=sum+i;}
            if(b>a){for(i=a;i<=b;i++)if(i%2!=0)sum=sum+i;}
        }
        printf("Case %d: %d\n",k,sum);}
    }
}
