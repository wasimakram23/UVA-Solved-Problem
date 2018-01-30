#include<stdio.h>
int main()
{
    long n;
    while(scanf("%ld",&n)==1)
    {
        if(n==0) break;
        if(n>=101)
        printf("f91(%ld) = %ld\n",n,n-10);
        else
        printf("f91(%ld) = 91\n",n);
    }
}
