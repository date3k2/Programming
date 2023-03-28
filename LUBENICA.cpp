#include <bits/stdc++.h>
using namespace std;
vector <pair<int,int>> vt[100005];

int n,k;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n;
for (int i=1;i<=n;++i)
{
int u,v,w;
cin>>u>>v>>w;
vt[u].emplace_back(v,w);
vt[v].emplace_back(u,w);
}
cin>>k;
for (int i=1;i<=k;++i)
{
int u,v;
cin>>u>>v;
}
}
