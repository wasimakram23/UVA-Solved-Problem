#include<stdio.h>
#include<string>
#include<queue>
#include<iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
        while(t)
        {
            char s[650];
            int a[6]={0,0,0,0,0,0},i;
            priority_queue<int>st;
            scanf("%s",s);
            for(i=0;s[i];i++)
            {
              if(s[i]=='M') {a[0]=a[0]+1;continue;}
              if(s[i]=='A') {a[1]=a[1]+1;continue;}
              if(s[i]=='R') {a[2]=a[2]+1;continue;}
              if(s[i]=='G') {a[3]=a[3]+1;continue;}
              if(s[i]=='T') {a[4]=a[4]+1;continue;}
              if(s[i]=='I') {a[5]=a[5]+1;continue;}
            }
            st.push((-1)*a[0]);
            st.push((-1)*a[1]/3);
            st.push((-1)*a[2]/2);
            st.push((-1)*a[3]);
            st.push((-1)*a[4]);
            st.push((-1)*a[5]);
            printf("%d\n",(-1)*st.top());
            t--;
        }


}

