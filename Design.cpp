//Practice--Design(A)
#include<iostream>
using namespace std;
int main()
{
    int n=10;
    for(int i=0;i<n;i++)
    {
        //For spaces
        for(int k=n;k>i;k--)
        {
            cout<<" ";
        }
        cout<<"/";
        for(int a=0;a<i;a++)
        {
            cout<<"  ";
        }
        cout<<'\\'<<endl;
    }
return 0;
}
