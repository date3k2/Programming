#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long;
using namespace std;
int n;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
if (n==1) {cout<<1; exit(0);}
if (n<=3) cout<<"NO SOLUTION";
else {
if (n%2==1) cout<<"1 ";
for(int i=n/2-1;i>=0;--i)
cout<<n-2*i<<" ";
cout<<n-3<<" "<<n-1<<" ";
fo(i,2,n/2-1) cout<<n-2*i-1<<" ";
}
return 0;
}