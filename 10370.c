#include<stdio.h>
int main()
{
   float sum,avg,result,st;
   int n,t,i,count;
   scanf("%d",&t);
   while(t!=0)
   {
       scanf("%d",&n);
       st=n;
       sum=0;
       count=0;
       if((1 <=n)&&(n<= 1000))
       {
           float num[n];
           //printf("\n");
           for(i=0;i<n;i++)
           {
               scanf("%f",&num[i]);
               sum=sum+num[i];
           }
           avg=sum/n;
          // printf("%f %f",sum,avg);
           for(i=0;i<n;i++)
           {
               if(num[i]>avg)
                count++;
           }
           //printf(" %d",count);
           result=count*100/st;
           printf("%.3f%%\n",result);
          // printf("%c",'%');

       }
       t--;

   }

}
