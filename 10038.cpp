#include<cstdio>
#include<iostream>
#include<set>

int main()
{
    std::set<int> s;
  std::set<int>::iterator it;
    int n,a[3000],i;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
            s.insert(scanf("%d",a[i]));
        for(it=s.begin();it!=s.end();it++)
        if(*it<0){printf("Not jolly\n");continue;}
        printf("Jolly\n");
    }
}
