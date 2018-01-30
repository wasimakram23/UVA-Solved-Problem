#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main()
{
  char c[123]={};
  int i;
  string s;
  c['e']=c['e'-32]='q';c['r']=c['r'-32]='w';c['t']=c['t'-32]='e';c['y']=c['y'-32]='r';c['u']=c['u'-32]='t';c['i']=c['i'-32]='y';c['o']=c['o'-32]='u';c['p']=c['p'-32]='i';
  c['d']=c['d'-32]='a';c['f']=c['f'-32]='s';c['g']=c['g'-32]='d';c['h']=c['h'-32]='f';c['j']=c['j'-32]='g';c['k']=c['k'-32]='h';c['l']=c['l'-32]='j';
  c['c']=c['c'-32]='z';c['v']=c['v'-32]='x';c['b']=c['b'-32]='c';c['n']=c['n'-32]='v';c['m']=c['m'-32]='b';
  c[',']='n';c['.']='m';c[';']='k';c[91]='o';c[93]='p';c[39]='l';
  while(getline(cin,s))
  {
      i=0;
      while(s[i])
      {
          printf("%c",s[i]!=' '?c[s[i]]:' ');
            i++;
      }
      printf("\n");
  }
}
