#include<stdio.h>
#include<math.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    unsigned long long int sum;
    char n[100];
    int i,c,len;
    while(scanf("%s",&n)&&n[0]!='0')
    {
        sum=0;
        i=1;
        len=strlen(n);
        while(n[len-1])
        {
            c=n[len-1]-48;
            if(c!=0)
            sum=sum+c*(pow(2,i)-1);
            i++;
            len--;
        }
        printf("%llu\n",sum);
    }
}
