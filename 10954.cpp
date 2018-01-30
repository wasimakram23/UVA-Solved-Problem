#include<stdio.h>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq;
    int i,t,n,num,a,b,sum,cost;
    while(scanf("%d",&n)&&n!=0)
    {
        cost=0;
        for(i=1;i<=n;i++)
        {scanf("%d",&num);
        pq.push(-num);}
        while(pq.size()!=1)
        {
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            sum=a+b;
            cost=cost+sum;
            pq.push(sum);
        }
        pq.pop();
        printf("%d\n",cost*(-1));
    }
}
