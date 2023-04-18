#include <bits/stdc++.h>
using namespace std;
#define fo(i,l,h) for(int i=l;i<=h;++i)
int t,a[5010];
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>t;
fo(i,1,t)
{
    int n,d=0,dem=0;
    string st,s1="",s2="";
    cin>>n;
    int k=n-1;
    cin>>st;
    while (d<=k)
    {
    while (st[d]=='0') ++d;
    while (st[k]=='1') --k;
    if (d>=k) break;
    dem+=2;
    string d1=to_string(d+1);
    string k1=to_string(k+1);
    s1=s1+d1+" ";
    s2=" "+ k1+s2;
    st[d]='0';
    st[k]='1';
    }
    s2.erase(0,1);
    if ((s1=="")) cout<<0<<"\n"; else
    {cout<<1<<"\n";
    cout<<dem<<" "<<s1 + s2<<"\n";}
}
return 0;
}