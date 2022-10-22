#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    int five=k/5;
    k=k-(five*5);
    int four=(k%5)/4;
    k=k-(four*4);
    int three=(k%4)/3;
    k=k-(three*3);
    int two=(k%3)/2;
    k=k-(two*2);
    int one=(k%2)/1;
    printf("%d\n",five+four+three+two+one);
return 0;
}
