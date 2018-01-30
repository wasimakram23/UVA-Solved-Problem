#include<stdio.h>

int main()
{
    int t,n,num,c,sum;
    while(scanf("%d",&t)&&t!=0)
    {
        while(t)
        {
         scanf("%d",&c);
         if(c==0){t--;continue;}
         sum=0;
         n=c;
         while(n!=1){
             if(n%2!=0)sum=sum+n%2;
             n=n/2;
         }
         sum++;
         printf("%d ",sum);
         sum=0;
         n=c;
         while(n)
         {
             num=n%10;
             while(num!=1){
             if(num%2!=0)sum=sum+num%2;
             num=num/2;}
         sum++;
         n=n/10;
         }
         printf("%d\n",sum);
         t--;
         }
        }
    }
