#include<iostream>
using namespace std;
int solve(int arr[],int n)
{
    if(n==0)
        return 0;
    else
       return arr[0]+solve(arr+1,n-1);
}
int main()
{
    int arr[100000];
    int n;
    cout<<"Enter Size: "<<endl;
    cin>>n;
    cout<<"Enter Array Elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Sum of The Elements of The Array is: "<<solve(arr,n)<<endl;
return 0;
}
