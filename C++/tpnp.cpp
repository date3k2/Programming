#include <bits/stdc++.h>
#define fo(i,l,h) for(long long i=l;i<=h;++i)
using namespace std;
int t,a[100007];
int so(long long n)
{
int kq=0;
while (n>0)
    {
    int minn=15;
    string s="";
    string st= to_string(n);
    fo(i,0,st.length()-1)
    if ((minn>st[i]-48) && (st[i]-48>0)) minn=st[i]-48;
    fo(i,0,st.length()-1) if (st[i]-48>0) s+="1"; else s+="0";
    long long k= stoll(s,0,10);
    kq+=minn;
    n-=k*minn;
    }
return kq;
}
main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>t;
long long n;
fo(i,1,t)
{
 cin>>n;
 a[i]=so(n);
}
cout.tie(0);
fo(i,1,t) cout<<a[i]<<endl;
return 0;
}
