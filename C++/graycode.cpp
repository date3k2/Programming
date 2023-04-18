#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n,a[20];
map<int,bool> kt;
void writet(int k,int a)
{
    for(int i=k-1;i>=0;--i)
    if (a&(1<<i)) cout<<1;else cout<<0;
cout<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
int dem=1,d=0,N=(1<<n);
fo(i,0,n-1) a[i+1]= (1<<i);
fo(i,1,n) cout<<0;
kt[0]=1;
cout<<endl;
while (dem<N)
{
for(int i=n;i>=1;--i) 
{
    if ((kt[d+a[i]]==1) ||((d+a[i])>=N)) continue;
    d+=a[i];
    kt[d]=1;
    writet(n,d); 
    ++dem;
}
fo(i,1,n)
{
    if ((kt[d-a[i]]==1) || (d-a[i]<=0)) continue;
    d-=a[i];
    kt[d]=1;
    writet(n,d);
    ++dem;
}
}
fo(i,0,N-1) 
if (kt[i]==0) cout<<i<<" ";
return 0;
}