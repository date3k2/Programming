#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
ll n;
bool kt[30];
vector<int> v;
ll a[30],minn=1e10,SUM=0;
void sub(int k)
{
if (k==n+1)
{
    ll s=0;
    for(auto i:v) s+=a[i];
    minn=min(minn,abs(SUM-2*s));
}
else 
    {
        v.push_back(k);
        sub(k+1);
        v.pop_back();
        sub(k+1);
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
fo(i,1,n) {
    cin>> a[i];
    SUM+=a[i];
}
sub(1);
cout<<minn;
return 0;
}