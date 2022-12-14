//Given an array--> increment a[i] if needed (i=index) to obtain a permutation of 1->N-->find No. of moves or if not possible output -1
#define ll long long 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll sum=0;
        int n;
        cin>>n;
        int arr[100000];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k=1;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(k-arr[i]>=0)
            {
                sum=sum+(k-arr[i]);
                k++;
            }
            else break;
        }
        if(k>n) cout<<sum<<endl;
        else cout<<"-1"<<endl;
    }
return 0;
}
