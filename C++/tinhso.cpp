#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
short n;
unsigned long long mu(int a,int n)
{
if (n==0) return(1);
if (n==1) return(a);
if (n%2==0) return(mu(a,n/2)*mu(a,n/2));
else return (mu(a,n/2)*mu(a,n/2)*a);
}
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n;
if (n==0) cout<<0;else
cout<<mu(9,n-1);
}
