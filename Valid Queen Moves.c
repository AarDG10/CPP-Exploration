#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,n,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&x,&y);
        int u=2*n-2+fmin(n-x,n-y)+fmin(x-1,y-1)+fmin(x-1,n-y)+fmin(n-x,y-1);
        printf("%d\n",u);
    }
    return 0;
}