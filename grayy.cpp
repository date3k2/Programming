#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int N;
vector <int> vt;
map<int,bool> kt;
void perm()
{
if (vt.size()==(1<<N)) {for(auto i: vt) cout<<i<<" "; cout<<"\n";}
else 
{
    fo(i,0,(1<<N)-1)
    {
        if (kt[i]==1) continue;
        kt[i]=1;
        vt.push_back(i);
        perm();
        kt[i]=0;
        vt.pop_back();
    }
}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>N;
perm();
return 0;
}