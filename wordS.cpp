#include<cstdio>
#include<stack>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    stack<char> ms;
    string s;
    int i;
    while(getline(cin,s))
    {
        i=0;
        while(s[i]){
        if(s[i]!=' ')
            ms.push(s[i]);
        else{
            while(!ms.empty()){
                printf("%c",ms.top());
                ms.pop();}
            printf(" ");}
        i++;}
        while(!ms.empty()){
                printf("%c",ms.top());
                ms.pop();}
     printf("\n");
}
}
