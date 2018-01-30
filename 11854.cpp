#include<stdio.h>
#include<queue>
using namespace std;

int main()
{
   int a,b,c;
   while(scanf("%d%d%d",&a,&b,&c)&&((a||b||c)!=0))
   {
       priority_queue<int>tri;
       tri.push(a*a);
       tri.push(b*b);
       tri.push(c*c);
       a=tri.top();tri.pop();
       b=tri.top();tri.pop();
       c=tri.top();
       printf("%s\n",(b+c)==a?"right":"wrong");

   }
}
