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
    int n;
    cin>>n;
    ll a[n+3];
    fo(j,1,n) cin>>a[j];
    sort(a+1,a+1+n);
    cout<<a[n]+a[n-1]<<"\n";
}
return 0;
}