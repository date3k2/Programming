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
    int n,k,d=0;
    cin>>n>>k;
    int a[n+3];
    fo(i,1,n) cin>>a[i];
    fo(i,k+1,n)
    if (a[i]<=k) ++d;
    cout<<d<<"\n";

}
return 0;
}