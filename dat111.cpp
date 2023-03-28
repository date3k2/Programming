#include <bits/stdc++.h>
using namespace std;
vector<int> ad[50005];
pair <int,int> edge[50005];
int low[50005],num[50005],d;
bool cau[50005],khop[50005],de[50005];
int m,n,d1,d2;
void dfs(int u)
{
num[u]=++d;
int d=0;
for (int i: ad[u])
{
    if (de[i]==true)continue;
    int v=edge[i].first+edge[i].second-u;
    de[i]=true;
    if (num[v]==0)
{
    dfs(v);
    low[u]=min(low[u],low[v]);
    cau[i]=((cau[i]) | (low[v]>=num[v]));
    khop[u]=(((khop[u]) | low[v]>=num[u]));
    d++;
} else low[u]=min(low[u],num[v]);
if ((u==1) &&(d<2)) khop[u]=0;
}
}
int main()
{
cin>>n>>m;
for (int i=1;i<=m;i++)
{
    int u,v;
    cin>>u>>v;
    edge[i].first=u;
    edge[i].second=v;
    ad[u].push_back(i);
    ad[v].push_back(i);
}
fill(low+1,low+1+n,INT_MAX);
fill(num+1,num+1+n,0);
fill(de+1,de+m+1,false);
for(int i=1;i<=n;i++)
if (num[i]==0)
dfs(1);
for(int i=1;i<=m;i++) if (cau[i]) d1++;
for(int i=1;i<=n;i++) if (khop[i]) d2++;
cout<<d2<<" "<<d1;
}
