//Chess Series (QUEEN MOVEMENT)
#include<stdio.h>  //Prog to know valid positions where Queen can move....8*8 chessboard
int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d %d",&x,&y);
        for(int i=1;i<17;i++)
        {
            printf("-");
        }
        printf("\n");
        for(int i=1;i<9;i++)
        {
            if(i!=x)
            {
                printf("%d %d\n",i,y);  //left-right
            }
            if(i!=y)
            {
                printf("%d %d\n",x,i);   //up-down
            }
        }
        for(int i=1;i<17;i++)
        {
            printf("-");
        }
        printf("\n");
        int a=x;
        int b=y;
        int c=x;
        int d=y;
        int e=x;
        int f=y;
        while(a!=8 && a!=1 && b!=1 && b!=8)
        {
            printf("%d %d\n",--a,++b); //diagonals
        }
        while(c!=8 && c!=1 && d!=1 && d!=8)
            printf("%d %d\n",++c,++d);
        while(e!=8 && e!=1 && f!=1 && f!=8)
            printf("%d %d\n",--e,--f);
        while(x!=8 && x!=1 && y!=1 && y!=8)
            printf("%d %d\n",++x,--y);
    }
    return 0;
}
