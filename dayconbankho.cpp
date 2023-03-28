#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
using namespace std;
int n,maxx=0;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n;
vector <int> a(n);
for (int &x: a) cin>>x;
vector <int> b(n+1,INT_MAX);
b[0]=INT_MIN;
for (auto x:a)
{
int k=lower_bound(b.begin(),b.end(),x)-b.begin();
b[k]=x;
maxx=max(maxx,k);
}
cout<<maxx<<"\n";
//fo(i,1,maxx) cout<<b.at(i)<<" ";
}
