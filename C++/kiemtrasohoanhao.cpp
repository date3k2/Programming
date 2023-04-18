#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
ll n;
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n;
if (n<=1) {cout<<"NO"; exit(0);};
ll m=n-1;
fo(i,2,trunc(sqrt(n)))
if (n % i==0) m-=(i+n/i);
if (m==0) cout<<"YES"; else cout<<"NO";
return 0;
}