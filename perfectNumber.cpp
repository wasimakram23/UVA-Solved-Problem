#include<stdio.h>
#include<math.h>

int main()
{
    unsigned long int pn,c,p,i,n,j,sum,in;
    char ch;
    while(scanf("%lu",&n)==1&&n!=0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lu%c",&p,&ch);
            in=1;
            if(p==1)
            {
                printf("No\n");
                continue;
            }
             for(j=2;j<p/2;j++)
            {
                if(p%j==0){in=0;break;}
                else in=1;
            }
                sum=1;
            if(in==1)
            {
                pn=pow(2,p-1)*(pow(2,p)-1);
                c=pn;
                for(j=2;j<c;j++)
                if(pn%j==0)
                {sum=sum+j+pn/j;c=pn/j;}
                if(sum==pn)
                printf("Yes\n");
                else
                printf("No\n");
            }
            else printf("No\n");
        }
    }
}
