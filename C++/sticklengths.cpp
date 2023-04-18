#include <bits/stdc++.h>
#define fo(i,l,h) for(int i=l;i<=h;++i)
#define ll long long
using namespace std;
int n;
unordered_map<int,int> m;
vector<int> v;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
int a[n+3];
int Max=0,value=0;
ll s=0;
fo(i,1,n)
{
    cin>>a[i];
    s+=a[i];
    ++m[a[i]];
    Max=max(Max,m[a[i]]);
}
if (Max==n) { cout<<0; exit(0); }
double min=1e9+1;
for(auto i:m)
if (i.second==Max) 
    {
        double k=(s-Max*i.first+0.0)/(n-Max);
        if (abs(k-i.first)<min)
            {
                min=abs(k-i.first);
                value=i.first;
            }
    }
cout<<s/n<<" ";
s=0;
fo(i,1,n) s+=abs(a[i]-value);
cout<<s;
return 0;
}