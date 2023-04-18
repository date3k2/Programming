#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
using namespace std;
int n,d;
string k;
map <string,int> m;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n;
fo(i,1,n)
{
string s;
cin>>s;
++m[s];
}
for (auto x:m)
{
if (x.second %2==1) {++d;k=x.first;}
}
if (d==1) cout<<k;else cout<<-1;
}
