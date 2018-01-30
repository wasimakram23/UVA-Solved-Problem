#include<stdio.h>

int main()
{
    int t,f;
    unsigned long long int sum,y,a,p;
    while(scanf("%d",&t)&&t!=0)
    {
        while(t){
        sum=0;
        scanf("%d",&f);
        if(f==0){t--;continue;}
        while(f)
        {
            scanf("%llu%llu%llu",&y,&a,&p);
            sum=sum+y*p;
            f--;
        }
        printf("%llu\n",sum);
        t--;
    }
}
}
