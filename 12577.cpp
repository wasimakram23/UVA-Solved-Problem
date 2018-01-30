#include<stdio.h>

int main()
{
    int count=0;
    char s[10];
    while(scanf("%s",&s)){
        if(s[0]=='*')
        break;
        else
        printf("Case %d: %s\n",++count,s[0]=='H'?"Hajj-e-Akbar":"Hajj-e-Asghar");
}}
