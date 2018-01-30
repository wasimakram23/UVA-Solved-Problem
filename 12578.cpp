#include<stdio.h>
#include<math.h>
#define pi 3.141592653589793
int main()
{
    int t,i;
    double l;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf",&l);
        printf("%0.2lf %0.2lf\n",pi*pow(l/5,2),(l*l*6)/10-pi*pow(l/5,2));
    }
}
