//Roll No. Pairing (1,2n),(2,2n-1),... 
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x;
        cin>>n>>x;
        n=n*2;
        long long int k=n-x+1;
        cout<<k<<endl;
    }
    return 0;
}
