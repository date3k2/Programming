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
    int n,k;
    cin>>n>>k;
    int a[n+3];
    bool kt=0;
    map<int,int> m;
    fo(i,1,n) {
        cin>>a[i];
        ++m[a[i]];
    }
    fo(i,1,n)
    if (m[a[i]-k]>0)
    {
        cout<<"YES\n";
        kt=1;
        break;
    }
    if (kt==0) cout<<"NO\n";

}
return 0;
}