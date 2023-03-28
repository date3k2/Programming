#include <bits/stdc++.h>
using namespace std;
struct sol
{
int u,s;
};
int n,a[200005],depth[200005],x,y,kt,dem;
sol ad[20005];
bool cmp(sol &a, sol &b)
{
return a.s>b.s;
}
int main()
{
freopen("DIAMETER.inp","r",stdin);
freopen("DIAMETER.out","w",stdout);
cin>>n;
depth[0]=-1;
for (int i=1;i<=n;i++)
{
cin>>a[i];
depth[i]=depth[a[i]]+1;
}
for (int i=1;i<=n;i++)
{depth[i]=depth[a[i]]+1;
ad[i].u=i;
ad[i].s=depth[i];
}
sort(ad+1,ad+1+n,cmp);
for (int i=1;i<=n-1;i++)
{
  for (int j=i+1;j<=n;j++)
  if ((a[ad[i].u]!=a[ad[j].u]) &&
    (ad[i].u!=a[ad[j].u]) && (a[ad[i].u]!=ad[j].u))
{ x=ad[i].u;
   y=ad[j].u;
   kt=1;
   break;}
   if (kt==1) break;
}
if (depth[x]<depth[y]) swap(x,y);
while (depth[x]!=depth[y])
{
    depth[x]--;
    x=a[x];
    dem++;
}
if (x==y) dem+=depth[x];
else
while (depth[x]!=0)
{
depth[x]--;
depth[y]--;
dem+=2;
x=a[x];
y=a[y];
if (x==y) break;
}
cout<<dem;
}



