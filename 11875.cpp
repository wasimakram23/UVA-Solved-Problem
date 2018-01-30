#include<stdio.h>
using namespace std;

int main()
{
    int t,age[100];
    scanf("%d",&t);
    while(t){
        int n,i,x,c=1;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&age[i]);
        printf("Case %d: %d\n",c++,age[n/2]);
        t--;
    }
}
