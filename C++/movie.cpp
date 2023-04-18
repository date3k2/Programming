#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n;
vector <int> v;
unordered_map <int,int> m,m1;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
int x[n+3],y[n+3];
fo(i,1,n) 
{
    cin>>x[i]>>y[i];
    m[x[i]]=y[i];
}
fo(i,1,n)
{
    m1[x[i]]=1;
    m[x[i]]=min(m[x[i]],y[i]);
}
for (auto i: m) 
{
    v.push_back(i.first);
    v.push_back(i.second);
}
sort(v.begin(),v.end());
 for (auto i:v) cout<<i<<" ";cout<<'\n';
// for (auto i:m1) cout<<i.first<<" "<<i.second<<" ";cout<<'\n';
for (auto i:m) cout<<i.first<<" "<<i.second<<'\n';
int Max_movies=0,s=m.size(),i=0,d=0;
while (d<s) 
{
    ++d;
    if (m1[v[i]]==1 && m[v[i]]==v[i+1]) i+=2;
    else
        {
            if (m[v[i]]< m[v[i+1]]) m.erase(v[i+1]);
            else m.erase(v[i]);
            ++i;
        }
    for (auto i:m) cout<<i.first<<" "<<i.second<<" ";cout<<'\n';
}
return 0;
}