//For pattern n=4
/*    1
     232
    34543
   4567654
*/

#include <iostream>
#include<math.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=1;
        int odd=1;
        for(int i=0;i<n;i++)
        {
            a=i+1;
            for(int j=0;j<n-i-1;j++)
            {
                cout<<" ";
            }
            for(int k=1;k<=odd;k++)
            {
                if(k>odd/2)
                {
                    cout<<a;
                    a--;
                }
                else
                {
                    cout<<a;
                    a++;
                }
            }
            odd+=2;
            cout<<endl;
        }
    }
return 0;
}
