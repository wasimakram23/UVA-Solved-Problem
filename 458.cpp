#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    int i;
    string s;
    while(getline(cin,s))
    {
        i=0;
        while(s[i])
            {printf("%c",s[i]-7);i++;}
        printf("\n");
    }
}
