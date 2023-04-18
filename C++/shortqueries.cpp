#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
short q;
ll a[23];
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>q;
fo(i,1,18) a[i]=(ll) pow(10,i);
fo(i,1,q)
{
    ll k,d=9;
    short j=1;
    cin>>k;
    if (k<=9) { 
        cout<<k<<"\n";
        continue;
    }
    while(d<k)
    {
        d+=9*a[j]*(j+1);
        ++j;
    }
    if (d==k) cout<<9<<"\n";
    else {
        d-=9*a[j-1]*j;
        ll du=(k-d) /j;
        ll kq=a[j-1]+du-1;
        short pos=k-d-du*j;
        if (pos==0) { cout<<kq %10<<"\n"; continue;}
        string st= to_string(kq+1);
        cout<<st[pos-1]<<"\n";
    }
}
return 0;
}