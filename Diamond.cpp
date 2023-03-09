//Creates a design like
/*

  *
 ***
*****
 ***
  *   
  
*/
#include <iostream>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;  //n should be odd -- enter number of levels.
        int a=1;
        for(int i=0;i<=n/2;i++)
        {
            for(int j=i;j<n/2;j++)
            {
                cout<<" ";
            }
            for(int k=1;k<=a;k++)                    
            {
                cout<<"*";
            }
            a+=2;
            cout<<endl;
        }
        a-=4;
        for(int i=0;i<n/2;i++)
        {
            for(int j=0;j<=i;j++)
            {
                cout<<" ";
            }
            for(int k=0;k<a;k++)
            {
                cout<<"*";
            }
            a-=2;
            cout<<endl;
        }
    }
return 0;
}
