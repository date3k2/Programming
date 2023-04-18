#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n;
set <int> s;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
int a[n+1];
fo(i,1,n) {cin>>a[i]; s.insert(a[i]); }
cout<<s.size();
return 0;
}