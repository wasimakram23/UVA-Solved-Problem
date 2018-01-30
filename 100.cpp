#include<stdio.h>
int main()
{
    int n,c,a,b,val,sw,count;
   while(scanf("%d%d",&a,&b)==2){
    printf("%d %d ",a,b);
    val=0;
    if(b>a){
    sw=a;
    a=b;
    b=sw;}
    for(c=b;c<=a;c++)
    {
        count=1;
        n=c;
        while(n!=1)
        {
            if(n%2!=0)
                n=3*n+1;
            else n=n/2;
            count++;
        }
        if(count>val)
            val=count;
    }
    printf("%d\n",val);
    }
}
