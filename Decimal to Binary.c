//Decimal to Binary code
#include<stdio.h>
int main()
{
    int num,arr[100000],i=0;
    printf("Enter Number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        arr[i]=num%2;
        num=num/2;
        i++;
        //length++;
    }
    for(int j=i;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
    printf("\n");
return 0;
}
