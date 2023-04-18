#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n;
struct sol
{
int a,b;
};
bool cmp(sol &u,sol &v)
{ return u.a < v.a; }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
sol s[n+3];
fo(i,1,n) 
cin>>s[i].a>>s[i].b;
sort(s+1,s+1+n,cmp);
int c=s[1].b,dem=1;
fo(i,2,n)
{
    if (s[i].b <c) c=s[i].b;
    if (s[i].a >= c) {
        ++dem;
        c=s[i].b;
    }
}
cout<<dem;
return 0;
}