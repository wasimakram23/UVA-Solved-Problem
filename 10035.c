#include<stdio.h>
int main()
{
    long int a,b;
    int count,sum;
    while(scanf("%ld %ld",&a,&b)&&a!=0&&b!=0){
    count=sum=0;
    while(a||b){
    sum=(a%10+b%10+sum)/10;
    count=count+sum;
    a=a/10;
    b=b/10;}
    if(!count)
    printf("No carry operation.\n");
    else if(!(count^1))
    printf("1 carry operation.\n");
    else
    printf("%d carry operations.\n",count);

}
}
