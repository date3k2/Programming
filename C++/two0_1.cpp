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
    int n,m,d=0;
    string a,b;
    cin>>n>>m;
    cin>>a;
    cin>>b;
    fo(i,0,n-1) if (a[i]==b[0]) 
    {d=i;break;}
    if (d==n-1 && m>1) cout<<"NO\n";
    else {
        if (n-m+1<=d) cout<<"NO\n";
        else {
     string s=a.substr(n-m+1,m-1);
     s=a[d]+s;
     cout<<(s==b?"YES\n":"NO\n");}
    }
}
return 0;
}