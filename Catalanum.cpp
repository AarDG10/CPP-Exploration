//Catalan Numbers
#include<iostream>
#define ll long long
using namespace std;
ll catalan(ll n)
{
    if(n<=1)   //base case
        return 1;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans+(catalan(i)*catalan(n-i-1));
    }
    return ans;
}
int main()
{
    cout<<"Topic:Catalan Numbers!"<<endl;
    ll n;
    cout<<"Enter Number: ";
    cin>>n;
    printf("The %lld th Catalan number is: %lld",n,catalan(n));
    return 0;
}
