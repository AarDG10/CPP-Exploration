#include<bits/stdc++.h>  //Code-Template - AarDG10
#define ll long long
#define pb push_back
#define sort(v) sort(v.begin(),v.end());
#define all(v) v.begin(),v.end()
#define reverse(v) reverse(v.begin(),v.end());
#define msb(x) __builtin_clz(x)
#define msbll(x) __builtin_clzll(x)
#define lsb(x) __builtin_ctz(x)
#define lsbll(x) __builtin_ctzll(x)
#define len(s) (int)(s.size())
#define toggle(val) val^=true;
#define oui cout<<"YES\n"
#define non cout<<"NO\n"
#define dist(first,last) distance(first, last);
#define lb(v,k) lower_bound(v.begin(),v.end(),k)
#define ub(v,k) upper_bound(v.begin(),v.end(),k)
#define eqrange(v,x) equal_range(v.begin(),v.end(),x);
#define inpvec(v) for(int i=0;i<len(v);i++) cin>>v[i];
#define prvec(v) for(auto i:v) cout<<i<<" "; cout<<endl;
#define prmap(p) for(auto &i:p) cout<<i.first<<" "<<i.second<<endl;
#define FOR(n) for(int i=0;i<n;i++)
#define flush fflush(stdout)
#define eos(s) s.npos
#define eof(s) s.end()
#define debug(x) cout<<"debug: "<<x<<endl;
using namespace std;

//Structure of a Linked List
struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

//Structure of a doubly linked list
struct DoubleList{
    int data;
    DoubleList* prev;
    DoubleList* next;
    DoubleList(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};

void solve()
{
    //solve here
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}