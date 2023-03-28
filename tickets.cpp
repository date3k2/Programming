#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n,m;
map <int,int> s;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n>>m;
int a[n+3];
fo(i,1,n) 
{
    int x;
    cin>>x;
    ++s[x];
}
fo(i,1,m) cin>>a[i];
fo(i,1,m)
{
    if (s.empty()) cout<<-1<<'\n';
    else {
    auto pos=s.lower_bound(a[i]);
     if (pos->first==a[i])
    {
        cout<<a[i]<<'\n';
        --pos->second;
        if (pos->second==0) s.erase(pos);
    }
    else
         if (s.size()==1 && s.begin()->second==1) 
         { if (s.begin()->first>a[i]) cout<<-1<<'\n'; else cout<<s.begin()->first<<'\n';
         s.clear();}
    else
    {
        --pos;
        if (pos->second==0) cout<<-1<<'\n';
        else {
        cout<<pos->first<<'\n';
        --pos->second;
        if (pos->second==0) s.erase(pos);
             }
    }
    }
}
return 0;
}