// Linear Search using Recursion
#include<iostream>
using namespace std;
bool solve(int arr[],int n,int k)
{
    if(n==0)
        return false;
    else
    {
        if(arr[0]==k)
            return true;
        else
            return solve(arr+1,n-1,k);
    }
}
int main()
{
    int arr[100000];
    int n;
    int k;
    cout<<"Enter Size: "<<endl;
    cin>>n;
    cout<<"Enter Array Elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Element to be found: "<<endl;
    cin>>k;
    if(solve(arr,n,k)) cout<<"Element Successfully found"<<endl;
    else cout<<"Element Not Found"<<endl;
return 0;
}
