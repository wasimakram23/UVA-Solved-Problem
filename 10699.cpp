#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<stdio.h>

using namespace std;
#define maxm 1000000

bool a[maxm+1];


void seav();

int main()
{
     memset(a,true,sizeof(a));
     seav();
    long int n,count=0;
    //freopen("401.txt","r",stdin);
     while(scanf("%ld",&n)&&n!=0){
            count=0;
     for(int i=2;i<=n/2;i++)
     {
         if(a[i]==true){
            if(n%i==0)
             ++count;
         }}
     printf("%ld : %ld\n",n,count);
     }
}

void seav()
{
   for(int i=4;i<maxm+1;i+=2)
       a[i]=false;
   int n=sqrt(maxm);
   for(int i=3;i<n;i+=2)
   {
       if(a[i]==true)
          for(int j=i*i;j<=maxm;j+=2*i)
            a[j]=false;
   }
}
