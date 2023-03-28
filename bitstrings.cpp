#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
ll fp(int n)
{
ll du=1000000007;
if (n==1) return 2;
if (n&1) return ((fp(n/2) % du) * (fp(n/2) % du) *2)% du;
else return ((fp(n/2) % du) * (fp(n/2) % du)) % du;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N;
cin>>N;
cout<<fp(N);
return 0;
}