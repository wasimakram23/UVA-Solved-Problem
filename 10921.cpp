#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main()
{
    string s;
    int i;
    while(getline(cin,s))
    {
        i=0;
        while(s[i])
        {
            if(s[i]>=48&&s[i]<=57){printf("%c",s[i]);i++;continue;}
            else if(s[i]=='-'){printf("%c",s[i]);i++;continue;}
            else if(s[i]>=65&&s[i]<=67){printf("%d",2);i++;continue;}
            else if(s[i]>=68&&s[i]<=70){printf("%d",3);i++;continue;}
            else if(s[i]>=71&&s[i]<=73){printf("%d",4);i++;continue;}
            else if(s[i]>=74&&s[i]<=76){printf("%d",5);i++;continue;}
            else if(s[i]>=77&&s[i]<=79){printf("%d",6);i++;continue;}
            else if(s[i]>=80&&s[i]<=83){printf("%d",7);i++;continue;}
            else if(s[i]>=84&&s[i]<=86){printf("%d",8);i++;continue;}
            else {printf("%d",9);i++;continue;}
        }
        printf("\n");
    }
}
