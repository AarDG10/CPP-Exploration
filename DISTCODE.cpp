#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<string>st;
       string s;
       cin>>s;
       for(int i=0;i+1<s.length();i++)
       {
           string sa;
           sa.append(1,s[i]);
           sa.append(1,s[i+1]);
           st.insert(sa);
       }
       cout<<st.size()<<endl;
    }
return 0;
}