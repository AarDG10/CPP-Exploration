#include<iostream>
using namespace std;
void print(int n)
{
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    if(n==0)
        return ;
    else
    {
        int digit=n%10;
        n/=10;
        print(n);
        cout<<arr[digit]<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;
    print(n);
return 0;
}
