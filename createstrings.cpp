#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
string st,s[41000];
char s1[41000];
vector <int> vt;
map<int,bool> kt;
map<string,bool> k;
int dem=0;
void cr()
{
if (vt.size()==st.length()) 
{
string x="";
for (auto i:vt) x=x+st[i-1];
if (k[x]==0) {
++dem ;s[dem]=x;k[x]=1;}
}
else 
    fo(i,1,st.length())
    {
        if (kt[i]==1) continue;
        kt[i]=1;
        vt.push_back(i);
        cr();
        kt[i]=0;
        vt.pop_back();
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>st;
fo(i,0,st.length()-1) s1[i]=st[i];
sort(s1,s1+st.length());
fo(i,0,st.length()-1) st[i]=s1[i];
cr();
cout<<dem<<"\n";
fo(i,1,dem) cout<<s[i]<<"\n";
return 0;
}