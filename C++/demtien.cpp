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
fo(i,1,t)
{
    int n;
    cin>>n;
    if (n==0) cout<<0<<"\n";
    else
    {
    int dem=1;
    while (n!=1)
    {
    if (n&1) {++dem;--n;}
    else n=n/2;
    }
    cout<<dem<<"\n";
    }
}
return 0;
}