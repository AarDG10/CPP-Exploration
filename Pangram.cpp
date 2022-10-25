//Pangram Checker
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    int sum=0,length=0;
    int n;
    cin>>n;
    char str[1000];
    cin>>str;
    if(n<26)
    cout<<"NO"<<endl;
    else
    {
        for(int i=0;str[i]!='\0';i++)
        {
            int a= (int) str[i];
            if(a>=65 && a<=90)
            {
                a=32+a;
            }
            v.push_back(a);
            length++;
        }
        sort(v.begin(),v.end());
        for(auto i=0;i<length;i++)
        {
            if(v[i]!=v[i+1])
            {
                sum=sum+v[i];
            }
        }
        if(sum==2847) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}
