#include<stdio.h>

int main()
{
    char s[15];
    int t,am=0,x,i;
    scanf("%d",&t);
    while(t--){
        scanf("%s",&s);
        if(s[0]=='r')
            printf("%d\n",am);
        else{
            scanf("%d",&x);
            am+=x;}
    }
    return 0;
}
