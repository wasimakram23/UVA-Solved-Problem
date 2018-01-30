#include<stdio.h>
using namespace std;

int main()
{
    int a,b,count,dif;
    while(scanf("%d%d",&a,&b)&&a!=-1&&b!=-1)
    {
        count=0;
        dif=(a-b)<0?(a-b)*-1:a-b;
        if(dif>50)
        {
            if(a<b){while(a!=b){count++;a--;if(a==-1)a=99;}}
            else{while(a!=b){count++;a++;if(a==100)a=0;}}
            printf("%d\n",count);
        }
        else printf("%d\n",dif);
    }
}
