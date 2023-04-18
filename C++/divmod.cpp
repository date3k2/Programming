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
fo(i,1,t)
{
    ll l,r,a;
    cin>>l>>r>>a;
    if (l==r || r%a==a-1) cout<<(ll)trunc(r/a)+r%a<<"\n";
    else {
    ll k=r/a;
    if (k*a==r) cout<<(ll)trunc((r-1)/a)+a-1<<"\n";
    else {
    if (k*a-1<l) cout<<(ll)trunc(r/a)+r%a<<"\n";
    else cout<<(ll)k+a-2<<"\n";}
    }
}
return 0;
}