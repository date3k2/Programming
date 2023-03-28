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
while (t--)
{
    ll n,b,x,y,k=0,s=0;
    cin>>n>>b>>x>>y;
    fo(i,1,n)
    {
        if (k+x<=b) k+=x;
        else k-=y;
        s+=k;
    }
    cout<<s<<"\n";
}
return 0;
}