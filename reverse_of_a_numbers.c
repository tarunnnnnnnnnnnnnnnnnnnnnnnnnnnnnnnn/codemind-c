#include<stdio.h>
int main()
{
    int n,i,rev=0,r;
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10)
    {
        r=i%10;
        rev=rev*10+r;
    }
    printf("%d",rev);
}