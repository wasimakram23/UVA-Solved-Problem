#include<iostream>
#include<stdio.h>
using namespace std;
unsigned long long  int sum[81];
void ancestore()
{
    sum[1]=1;sum[2]=2;
    for(int i=3;i<81;i++)
       sum[i]=sum[i-1]+sum[i-2];
}


int main()
{
    int gen;
    ancestore();
    while(scanf("%d",&gen)&&gen!=0)
        printf("%llu\n",sum[gen]);
}
