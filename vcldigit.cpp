#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
ll n;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
int a[n+5];
int maxx=0;
fo(i,1,n)
{
    cin>>a[i];
    maxx=max(maxx,a[i]);
}
ll d=1;
string st;
while (st.length()<maxx)
{
string x=to_string(d);
st=st+x;
++d;
}
fo(i,1,n) cout<<st[a[i]-1]<<"\n";
return 0;
}