#include<stdio.h>

int main()
{
    unsigned long int n,sum;
    while(scanf("%lu",&n)&&n!=0)
    {
        if(n<10){printf("%lu\n",n);continue;}
       while(n>9){
            sum=0;
            while(n!=0)
            {
               sum=sum+n%10;
               n=n/10;
            }
            n=sum;
       }
       printf("%lu\n",n);
    }

}
