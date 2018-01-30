#include<stdio.h>
int main()
{
    int t,w,h,l,count;
    while(scanf("%d",&t)&&t!=0)
    {
        count=0;
        while(t)
        {
            count++;
            scanf("%d%d%d",&l,&w,&h);
            printf("Case %d: %s\n",count,(w<=20&&l<=20&&h<=20)?"good":"bad");
            t--;
        }
    }
}
