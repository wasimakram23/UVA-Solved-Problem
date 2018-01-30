#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    int i=0,top=0,t;
    scanf("%d",&t);
    getchar();
    while(t!=0)
    {
        char stack[100];
        i=0;top=0;
        getline(cin,str);
        if(str.compare("\n")==0)
            printf("Yes\n");
        else{
        while(str[i]!='\0')
        {
        top++;
        stack[top]=str[i];
        i++;
        if((stack[top-1]=='['&&stack[top]==']')||(stack[top-1]=='('&&stack[top]==')'))
        top=top-2;
        }
       if(top==0)
        printf("Yes\n");
       else
        printf("No\n");
        t--;
    }
  }
}
