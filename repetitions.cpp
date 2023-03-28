#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
using namespace std;
string st;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>st;
if (st.length() == 1) cout<<1; else {
int dem=1,maxi=1;
fo(i,0,st.length()-2)
if (st[i]==st[i+1]) {++dem ; maxi=max(maxi,dem);}
else dem=1;
cout<<maxi;
}
return 0;
}