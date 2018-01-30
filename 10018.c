#include<stdio.h>

int main()
{
    long int i,n,t,sum=0,c=0;
    scanf("%ld",&t);
    for(i=1;i<=t;i++){
            scanf("%ld",&n);
            c=0;
    for(;;)
    {
        t=n;
        sum=0;
        while(t)
        {
            sum=sum*10+t%10;
            t=t/10;
        }
       if(n==sum)break;
        else{c++;n=sum+n;}
    }

    printf("%ld %ld\n",c,sum);}

}
