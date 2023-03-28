#include <bits/stdc++.h>
using namespace std;
int p[1001][1001];
int depth[1001];
vector<int> cay[1001];
int n,u,v,k;
void dfs(int u)
{
int par;
par=u;
for (auto v:cay[u])
{   depth[v]=depth[u]+1;
    if (v==par) continue;
    p[v][0]=u;
    for (int i=1;i<=trunc(log2(n));i++)
        p[v][i]=p[p[v][i-1]][i-1];
    dfs(v);
}
}
int jump(int u,int k)
{
for(int i=0;i<=trunc(log2(n));i++)
if ((k>>i) & 1) u=p[u][i];
return u;
}
int lca(int u,int v)
{
if (depth[v]>depth[u])  swap(u,v);
u=jump(u,depth[u]-depth[v]);
if (u==v) return u;
for (int i=trunc(log2(n));i>=0;i--)
{
    if (p[u][i]!=p[v][i])
    {
        u=p[u][i];
        v=p[v][i];
    }
return p[u][0];
}
}
int main()
{
freopen("cay.txt","r",stdin);
freopen("cay.out","w",stdout);
cin>>n>>u>>v;
for(int i=1;i<=n;i++)
{
    int u,v;
    cin>>u>>v;
    cay[u].push_back(v);
    //cay[v].push_back(u);
}
dfs(1);
//for(int i=v;i>=0;i--) cout<<jump(u,i)<<" ";
cout<<lca(u,v);
return 0;
}
