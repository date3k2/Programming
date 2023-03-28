#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
map< int,vector<int> > m;
int n,x;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n>>x;
int a[n+3];
fo(i,1,n)
{
    cin>>a[i];
    m[a[i]].push_back(i);
}
bool kt=0;
fo(i,1,n)
{
if (x<=a[i]) continue;
if (2*a[i]==x) 
{if (m[a[i]].size()>=2) {cout<<m[a[i]].at(0)<<" "<<m[a[i]].at(1)<<'\n'; kt=1; break;} 
  else continue;}
if (m[x-a[i]].size()>=1) 
    {
    cout<<m[a[i]].at(0)<<" "<<m[x-a[i]].at(0);
    kt=1;
    break;
    }
}
if (kt==0) cout<<"IMPOSSIBLE";
return 0;
}