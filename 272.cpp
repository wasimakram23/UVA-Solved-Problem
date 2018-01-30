#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    char c1='\'',c2='\`';
    int i=0;
    static int c=0;
    //freopen("272.txt","r",stdin);
    while(getline(cin,s))
    {
        while(s[i])
        {
            if(s[i]==34&&c==0){printf("%c%c",c2,c2);i++;c=1;continue;}
           else if(s[i]==34&&c==1){printf("%c%c",c1,c1);i++;c=0;continue;}
            else{printf("%c",s[i]);i++;continue;}
        }
       printf("\n"); i=0;
    }
}
