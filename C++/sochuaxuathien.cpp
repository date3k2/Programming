#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
short t;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
fo(k,1,t)
{
    int n,x;
    cin>>n;
    map<int,bool> kt;
    kt.clear();
    fo(i,1,n) {
        cin>>x;
        kt[x]=1;
    }
    int d=1;
    if (kt[d]==0) cout<<d<<"\n";
    else {
        while (kt[d]==1) ++d;
        cout<<d<<"\n";
    }
}
return 0;
}