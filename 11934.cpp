#include<stdio.h>

int main()
{
    int a,b,c,d,l,i;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&l)&&((a||b||c||d||l)!=0)){
         if(d>1000)
         {
             printf("0\n");
             continue;
         }
        int count=0;
        for(i=0;i<=l;i++)
            if((a*i*i+b*i+c)%d==0)
            count++;
        printf("%d\n",count);
    }
}
