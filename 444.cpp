#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[100],c;
    int i,num;
    while(gets(s))
    {
        i=strlen(s)-1;
        while(s[i]&&i>=0)
        {
            if(s[i]==32||s[i]==33||s[i]==44||s[i]==46||s[i]==58||s[i]==59||s[i]==63||s[i]>=97&&s[i]<=122||s[i]>=65&&s[i]<=90)
            {
              num=s[i];
              while(num){printf("%d",num%10);num/=10;}
              i--;
              continue;
            }
            if(s[i]>=48&&s[i]<=57)
            {
                num=(s[i]-48)*10+s[i-1]-48;
                if(num>23)
                {
                    printf("%c",num);
                    i=i-2;
                    continue;
                }
                else
                {
                    num=num*10+s[i-2]-48;
                    printf("%c",num);
                    i=i-3;
                    continue;
                }
            }

        }
        printf("\n");
    }
}
