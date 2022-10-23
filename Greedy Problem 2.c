//Greedy Prog-2
#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int cent=n/100;
    int rem= n%100;
    long long int vingt=rem/20;
    rem=rem%20;
    long long int dix=rem/10;
    rem=rem%10;
    long long int cinq=rem/5;
    rem=rem%5;
    long long int un=rem;
    printf("%lld\n",cent+vingt+dix+cinq+un);
return 0;
}
