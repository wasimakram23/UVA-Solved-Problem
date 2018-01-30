#include<stdio.h>
#include<math.h>
int pc(long int p)
{
    int in=1;
    for(int j=2;j<p/2;j++)
            {
                if(p%j==0){in=0;break;}
                else in=1;
            }
return in;
}
void perc(long int p)
{
    long int sum=1,pn,j,c;
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
int main()
{
    long int p,n,j,in,i;
    char ch;
    while(scanf("%ld",&n)==1&&n!=0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%ld%c",&p,&ch);
            in=1;
            if(p==1){
                printf("No\n");
                continue;}
            in=pc(p);
            if(in==1)
            perc(p);
            else printf("No\n");
        }
    }
}

