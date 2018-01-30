#include<stdio.h>
#include<queue>
using namespace std;

int main()
{
    int t,count=1,n;
    scanf("%d",&t);
    while(t)
    {
        int n,i,s;
        scanf("%d",&n);
        priority_queue<int>speed;
        for(i=0;i<n;i++)
        {
            scanf("%d",&s);
            speed.push(s);
        }
        printf("Case %d: %d\n",count++,speed.top());
        t--;
    }
}
