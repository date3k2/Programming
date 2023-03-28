#include <bits/stdc++.h>
using namespace std;
vector <pair<int,int>> vt[5005];
long long dist[5005];
int trace[5005];
int m,n;
priority_queue< pair<long long,int> , vector <pair<long long,int>>, greater<pair<long long,int>>> pq;
void dji()
{
fill(dist+1,dist+1+n,1e15);
dist[1]=0;
pq.emplace(dist[1],1);
while (pq.size()!=0)
{
long long cost=pq.top().first;
int u=pq.top().second;
pq.pop();
if (cost!=dist[u]) continue;
for (auto i:vt[u])
{
 int v=i.first;
 int s=i.second;
 if (dist[v]>dist[u]+s)
 {
     dist[v]=dist[u]+s;
     trace[v]=u;
     pq.emplace(dist[v],v);
 }
}
}
}
int main()
{
freopen("di.inp","r",stdin);
freopen("di.out","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n>>m;
for (int i=1;i<=m;i++)
{
int u,v,s;
cin>>u>>v>>s;
vt[u].emplace_back(v,s);
vt[v].emplace_back(u,s);
}
dji();
if (dist[n]==1e15) cout<<"Khong den duoc dich";
else
{
cout<<dist[n]<<"\n";
while (n!=0)
{
cout<<n<<" ";
n=trace[n];
}
}
return 0;
}
