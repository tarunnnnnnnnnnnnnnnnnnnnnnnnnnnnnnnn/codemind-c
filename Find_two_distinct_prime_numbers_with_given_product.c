#include<stdio.h>
int main()
{
    int n,i=2,j,s,k;
    scanf("%d",&n);
    while(n>0)
    {
        if(n%i==0)
        {
            for(j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                    break;
                }
            }
            if(i==j)
            {
                s=i;
                break;
            }
        }
        else
        {
            i++;
        }
    }
    for(k=2;k<=(n/i);k++)
    {
        if((n/i)%k==0)
        {
            break;
        }
    }
    if(k==(n/i))
    {
        printf("%d %d",i,(n/i));
    }
    else
    {
        printf("-1");
    }
}
