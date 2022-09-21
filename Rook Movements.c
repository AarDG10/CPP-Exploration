//Chess Series (ROOK MOVEMENT)
#include<stdio.h>  //Prog to know valid positions where Rook can move....8*8 chessboard
int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d %d",&x,&y);
        for(int i=1;i<9;i++)
        {
            if(i!=x)
            {
                printf("%d %d\n",i,y);
            }
            if(i!=y)
            {
                printf("%d %d\n",x,i);
            }
        }
    }
    return 0;
}
