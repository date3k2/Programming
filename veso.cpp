#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
if (n==0) {cout<<0; exit(0);}
fo(i,1,n)
{
    cout<<setw(2*n+1);
    cout<<n-i+1<<"\n";
}
fo(i,1,n) cout<<n-i+1<<setw(2*i-1));cout<<0<<" ";
fo(i,1,n-1) cout<<i<<" ";cout<<n<<"\n";
fo(i,1,n)
{
    cout<<setw(2*n+1);
    cout<<i<<"\n";
}
return 0;
}