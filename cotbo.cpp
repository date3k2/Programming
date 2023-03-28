#include <bits/stdc++.h>
using namespace std;
vector<int> ad[30005];
bool kt[30005];
void dfs(int u)
{
kt[u]=1;
    for (auto v: ad[u])
    {
    if (kt[v]==1) continue;
    dfs(v);
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin >> n >> m;
for (int i=1;i<=m;++i)
{
    int u,v;
    cin >> u >> v;
    ad[u].push_back(v);
    ad[v].push_back(u);
}
dfs(1);
int dem=0;
for(int i = 1; i <=n;++i) 
if (kt[i]==0) ++dem;
cout<<dem<<"\n";
for(int i = 1; i <=n;++i) 
if (kt[i]==0) cout<<i<<" ";
return 0;
}