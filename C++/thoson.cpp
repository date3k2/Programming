#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
ll a=1,b=1,c=1;
cin>>n;
fo(i,1,n-2)
{
c=a+b;
a=b;
b=c;
}
cout<<c;
return 0;
}