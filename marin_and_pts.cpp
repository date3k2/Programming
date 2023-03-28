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
    int n,dem=0;
    cin>>n;
    string st;
    cin>>st;
    fo(i,0,n-2) if (st[i]=='0' && st[i+1]=='0') dem+=2;
     fo(i,0,n-3)
    if (st[i]=='0' && st[i+1]=='1' && st[i+2]=='0') ++dem;
    cout<<dem<<"\n";
    }
return 0;
}