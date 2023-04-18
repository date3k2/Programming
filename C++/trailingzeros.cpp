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
int k=5,s=0;
while (k<=n)
{
    s=s+n/k;
    k*=5;
}
cout<<s;
return 0;
}