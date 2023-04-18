#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int t;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
ll mod=998244353;
while (t--)
{
    int n;
    cin>>n;
    if (n&1) {cout<<0<<"\n";continue;}
    ll s=1;
    fo(i,1,n/2)
    {
        s*=i;
        s%=mod;
    }
    s=(s*s)%mod;
    cout<<s<<"\n";

}
return 0;
}