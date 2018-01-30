#include<stdio.h>
#include<queue>
using namespace std;

int main()
{
    int t,n,a,b;
    scanf("%d",&t);
    while(t)
    {
        priority_queue<int>tri;
        for(int i=0;i<3;i++)
        {scanf("%d",&n);tri.push(n);}
        n=tri.top();tri.pop();
        a=tri.top();tri.pop();
        b=tri.top();
        printf("%s\n",(a+b)>n?"OK":"Wrong!!");
        t--;
    }
}
