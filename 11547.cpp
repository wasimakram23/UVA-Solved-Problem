#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    long long int n;
    while(scanf("%d",&t)&&t!=0)
    {
        while(t)
        {
            scanf("%lld",&n);
            n=n*567;
            n=n/9;
            n=n+7492;
            n=n*235;
            n=n/47;
            n=n-498;
            n=n/10;
            n=n%10;
            printf("%lld\n",n>=0?n:-n);t--;
        }

    }
}
