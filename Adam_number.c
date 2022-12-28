#include<stdio.h>
int adam(int);
int main()
{
    int n,i,s1,s2,a,b;
    scanf("%d",&n);
    a=adam(n);
    s1=n*n;
    s2=a*a;
    b=adam(s2);
    if(s1==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
int adam(int n)
{
    int r,rev=0;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}