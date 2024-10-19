#include<bits/stdc++.h>
#define ll long long
#define ld long double
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
#define INF LLONG_MAX
#define debug(x) cout<<"debug: "<<x<<endl;
#define debugerr() cout<<"debug: error"<<endl;
using namespace std;
const ll MOD = 1e9+7;
template <typename T> T lcm(T a, T b)
{
    return abs(a*b)/__gcd(a,b);
}
double logab(ll a, ll b)
{
    return log2(a) / log2(b);
}
int xorring(int n) 
{ 
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    return 0;
}
vector<bool>sieve(int n)
{
    vector<bool>v(n+1,true);
    v[0]=false;
    v[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(v[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                v[j]=false;
            }
        }
    }
    return v;
}
bool check(map<char,int>m1, map<char,int>m2)
{
    for(auto i:m1)
    {
        if(i.second!=m2[i.first]) return false;
    }
    return true;
}
void DFS(int V)
{
    //DFS Here
    // function<void(int)> dfs = [&](int a){
    //     //Lambda DFS
    // };

    //Auto variant
    // auto fun = [&](int i, auto &&self)->int{     //CPP20
    //     dp[i]=self(i-1,self)+self(i-2,self);
    // };
}

bool cust(vector<ld>p1,vector<ld>p2)
{
    if(p1[0]>p2[0]) return true;
    else if(p1[0]<p2[0]) return false;
    return p1[1]>p2[1];
}

ll binexp(ll prod, ll pwr)
{
    if(!pwr) return 1;
    ll det=binexp(prod,pwr/2);
    if(pwr&1) return ((det%MOD)*(((det%MOD)*(prod%MOD))%MOD))%MOD;
    else return ((det%MOD)*(det%MOD))%MOD;
}

void solve()
{
    int n,m; cin>>n>>m;
    vector<ll>v(n); inpvec(v);
    sort(v);
    ll tot=0;
    vector<ll>tempe=v;
    auto it=unique(all(tempe));
    tempe.erase(it,tempe.end());
    vector<ll>fac(len(tempe));
    map<ll,ll>mp; for(auto i:v) mp[i]++;
    int j=0;
    for(auto [x,y]:mp)
    {
        fac[j]=y%MOD;
        j++;
    }
    int i=0;
    ll prod=1;
    if(len(tempe)<m)
    {
        cout<<0<<endl; return;
    }
    for(j=0;j<m;j++)
    {
        prod=((prod%MOD)*(fac[j]%MOD))%MOD;
        prod%=MOD;
    } j--;
    while(j<len(tempe))
    {
        if(tempe[j]-tempe[i]<m)
        {  
            if(j-i+1==m)
            {
                tot=(tot%MOD)+(prod%MOD);
                tot=tot%MOD;
                j++;
                if(j<len(tempe)) 
                {
                    prod=((prod%MOD)*(fac[j]%MOD))%MOD;
                    prod=prod%MOD;
                }
            }
            else if(j-i+1<m) 
            {
                j++;
                if(j<len(tempe)) 
                {
                    prod=((prod%MOD)*(fac[j]%MOD))%MOD;
                    prod=prod%MOD;
                }
            }
        }
        else 
        {
            //Mod-2, fac[i]
            ll fact=binexp(fac[i],MOD-2);   //using binary exponentiation + fermat's little theorem (Modulo multiplicative inverse)
            prod=((prod%MOD)*(fact%MOD))%MOD;
            prod%=MOD; 
            i++;
        }
    }
    cout<<tot<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        // codeforces();
        solve();
    }
return 0;
}