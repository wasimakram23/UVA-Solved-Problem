#include<stdio.h>
#include<math.h>

int main()
{
    int pn,c,p,i,n,j,sum,in=1;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&pn)==1)
    {
                if(pn==1)
                {printf("%5d  DEFICIENT\n",pn);continue;}
                if(pn==0) break;
                sum=1;
                c=pn;
                for(j=2;j<c;j++)
                if(pn%j==0)
                {sum=sum+j+pn/j;c=pn/j;}
                if(sum==pn)
                    printf("%5d  PERFECT\n",pn);
                else if(sum>pn)
                    printf("%5d  ABUNDANT\n",pn);
                else
                    printf("%5d  DEFICIENT\n",pn);
            }
            printf("END OF OUTPUT\n");
    }


