#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
ll n;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
cout<<(ll) trunc((-1+sqrt(1+8*n))/2)+1<<endl;
return 0;
}