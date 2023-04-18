#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
using namespace std;
int n;
set <char> ss;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
int a[n+3];
string st;
fo(i,1,n)
{
    cin>>a[i];
    string s=to_string(a[i]);
    st=st+s;
}
fo(i,0,st.length()-1) ss.insert(st[i]);
for(auto i: ss) cout<<i<<" ";
return 0;
}