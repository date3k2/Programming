#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int t;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
while (t--)
{
    int x,y;
    cin>>x>>y;
    if (x==0 && y==0) cout<<0<<"\n";
    else if (sqrt(x*x+y*y)==trunc(sqrt(x*x+y*y))) cout<<1<<"\n";
    else cout<<2<<"\n";
}
return 0;
}