//ASCII PRACTICE
#include<stdio.h>
int main()
{
    int a=0,A=0;
    char str[1000];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)  //check loop
    {
        int c= (int) str[i];
        if(c>=65 && c<=90)
            A++;
        else
            a++;
    }
    if(a>=A)
    {
        for(int i=0;str[i]!='\0';i++)  //conv. loop
        {
            int c= (int) str[i];
            if(c>=65 && c<=90)
            {
                str[i]= (char) (c+32);
            }
        }
    }
    else
    {
        for(int i=0;str[i]!='\0';i++)
        {
            int c= (int) str[i];
            if(c>=97 && c<=122)
            {
                str[i]= (char) (c-32);
            }
        }
    }
    printf("%s",str);
    return 0;
}
