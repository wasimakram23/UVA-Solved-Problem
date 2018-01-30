#include<stdio.h>
using namespace std;

struct input{
char url[110];
int r;};
typedef struct input data;

int main()
{
    data d[10];
    int i,t,val=0;
    while(scanf("%d",&t)==1)
    {

        int count=0;
        while(t)
        {
            val=0;
            for(i=0;i<10;i++)scanf("%s%d",&d[i].url,&d[i].r);
            for(i=0;i<10;i++)
            {
                if(d[i].r>val)
                    val=d[i].r;
                else
                    break;
            }
            printf("Case #%d:\n",++count);
            for(i=0;i<10;i++)
                if(d[i].r==val)
                printf("%s\n",d[i].url);
            t--;
        }
    }


}
