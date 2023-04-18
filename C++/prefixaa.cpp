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
    int n,Max=0;
    cin>>n;
    int a[n+3];
    fo(i,1,n) cin>>a[i];
    vector <int> v[n+3];
    for(int i=n;i>=1;--i) v[a[i]].push_back(i);
    fo(i,1,n) 
      if (v[a[i]].size()>1) Max=max(Max,v[a[i]][1]);
    cout<<Max<<"\n";
}
return 0;
}