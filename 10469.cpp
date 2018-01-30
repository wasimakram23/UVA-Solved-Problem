#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,i,num[100],temp,sum,l1,l2,l;
    while(scanf("%d%d",&a,&b)==2)
    {
        sum=l1=l2=0;
        int num1[100]={},num2[100]={};
        while(a!=1){num1[l1]=a%2;a=a/2;l1++;}num1[l1]=1;
        while(b!=1){num2[l2]=b%2;b=b/2;l2++;}num2[l2]=1;
        if(l1>l2)l=l1;else l=l2;
        for(i=0;i<=l;i++)
        {if(num1[i]+num2[i]==1)
           num[i]=1;
        else num[i]=0;}
        while(l>=0)
        {
            if(num[l]==1)
                sum=sum+pow(2,l);
            l--;
        }
        printf("%d\n",sum);
    }
}
