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
    int n;
    cin>>n;
    int a[n+3];
    bool kt=1;
    fo(i,1,n) cin>>a[i];
    int u=a[1]%2,v=a[2]%2;
    fo(i,3,n)
    {
        if (i%2==1) if (a[i]%2!=u) {cout<<"NO\n"; kt=0; break; }
        if (i%2==0) if (a[i]%2!=v) {cout<<"NO\n"; kt=0; break;}
    }
    if (kt) cout<<"YES\n";

}
return 0;
}